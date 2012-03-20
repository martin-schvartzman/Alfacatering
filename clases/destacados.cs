<?php

class destacados{
	private $conexion;
	
	function destacados(){
		$this->conexion=new bd("alfacatering");
	}
	
	public function notas(){
		$sql="select n1,n2,n3,n4 from destacados";
		$n=$this->conexion->get($sql);
		$notas=array();
		if($n["n1"] != 0)$notas[0]=new noticia($n["n1"]);
		if($n["n2"] != 0)$notas[1]=new noticia($n["n2"]);
		if($n["n3"] != 0)$notas[2]=new noticia($n["n3"]);
		if($n["n4"] != 0)$notas[3]=new noticia($n["n4"]);
		return $notas;
	}
	
	public function productos(){
		$sql="select p1,p2,p3,p4,p5 from destacados";
		$n=$this->conexion->get($sql);
		$notas=array();
		if($n["p1"] != 0)$notas[0]=new producto($n["p1"]);
		if($n["p2"] != 0)$notas[1]=new producto($n["p2"]);
		if($n["p3"] != 0)$notas[2]=new producto($n["p3"]);
		if($n["p4"] != 0)$notas[3]=new producto($n["p4"]);
		if($n["p5"] != 0)$notas[4]=new producto($n["p5"]);
		return $notas;
	}
	
	public function destacarp($id){
		$sql="select p1,p2,p3,p4,p5 from destacados";
		$n=$this->conexion->get($sql);
		if($n["p1"] == 0){$this->destacar("p1",$id);return true;}
		if($n["p2"] == 0){$this->destacar("p2",$id);return true;}
		if($n["p3"] == 0){$this->destacar("p3",$id);return true;}
		if($n["p4"] == 0){$this->destacar("p4",$id);return true;}
		if($n["p5"] == 0){$this->destacar("p5",$id);return true;}
		return false;
	}
	
	public function destacarn($id){
		$sql="select n1,n2,n3,n4 from destacados";
		$n=$this->conexion->get($sql);
		if($n["n1"] == 0){$this->destacar("n1",$id);return true;}
		if($n["n2"] == 0){$this->destacar("n2",$id);return true;}
		if($n["n3"] == 0){$this->destacar("n3",$id);return true;}
		if($n["n4"] == 0){$this->destacar("n4",$id);return true;}
		return false;
	}
	
	private function destacar($f,$id){
		$sql="update destacados set ".$f."=".$id;
		$this->conexion->delete($sql);
	}
	
	public function deleten($i){
		$flag=true;$cur=$i;
		while($flag){
			if($cur != "4"){
				$sql="select n".$cur.",n".($cur + 1)." from destacados";
				$n=$this->conexion->get($sql);
				$sql="update destacados set n".$cur."=".$n["n".($cur + 1)].",n".($cur + 1)."=".$n["n".($cur)];
				$n=$this->conexion->delete($sql);
				$cur++;
			}else{$flag=false;}
		}
		$sql="update destacados set n4=0";
		$this->conexion->delete($sql);
	}
	
	public function deletep($i){
		$flag=true;$cur=intval($i);
		while($flag){
			if($cur != 5){
				$sql="select p".$cur.",p".($cur + 1)." from destacados";
				//echo $sql."</br>";
				//return false;
				$n=$this->conexion->get($sql);
				$sql="update destacados set p".$cur."=".$n["p".($cur + 1)].",p".($cur + 1)."=".$n["p".($cur)];
				$n=$this->conexion->delete($sql);
				$cur++;
				//echo $sql."</br>";
			}else{$flag=false;}
		}
		$sql="update destacados set p5=0";
		$this->conexion->delete($sql);
	}
	
	public function isdestacadop($id){
		$pr=$this->productos();
		foreach($pr as $p){
			if($p->id == $id)return true;
		}
		return false;
	}
	
	public function isdestacadon($id){
		$pr=$this->notas();
		foreach($pr as $p){
			if($p->id == $id)return true;
		}
		return false;
	}
	

}


?>