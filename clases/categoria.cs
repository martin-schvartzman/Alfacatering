<?php

class categoria{

	public $id;
	public $nombre;
	public $orden;
	private $conexion;
	
	function categoria($id){
		$this->conexion=new bd("alfacatering");
		$sql="select id,nombre,orden from categoria where id=".$id;
		$categoria=$this->conexion->get($sql);
		$this->id=$categoria["id"];
		$this->orden=$categoria["orden"];
		$this->nombre=$categoria["nombre"];
		
	}
	
	public function traer(){
		$sql="select id from subcategoria where categoria=".$this->id." order by orden asc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new subcat($s["id"]);
			$i++;
		}
		return $sub;
	}
	
	public function delete(){
		$subs=$this->traer();
		foreach($subs as $s){
		$s->delete();
		}
		$sql="delete from categoria where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function edit($nombre){
		$sql="update categoria set nombre='".$nombre."' where id=".$this->id."";
		$this->conexion->delete($sql);
	}
	
	public function add($nombre,$descripcion){
		$sql="select max(orden) as ord from subcategoria where categoria=".$this->id;
		$ord=$this->conexion->get($sql);
		$ord=$ord["ord"];
		$ord++;
		$sql="insert into subcategoria (nombre,descripcion,categoria,orden) values('".$nombre."','".$descripcion."',".$this->id.",".$ord.")";
		return $this->conexion->insert($sql);
	}
	
	public function subir(){
		$sql="select orden from categoria where id=".$this->id;
		$ord=$this->conexion->get($sql);$ord=$ord["orden"];
		$sql="select max(orden) as ord from categoria";
		$max=$this->conexion->get($sql);
		$max=$max["ord"];
		if($ord != $max){
			$sql="update categoria set orden=".$ord." where orden=".($ord + 1);
			$this->conexion->delete($sql);
			//echo $sql;
			$sql="update categoria set orden=".($ord + 1)." where id=".$this->id;
			$this->conexion->delete($sql);
		}
	}
	
	public function bajar(){
		$sql="select orden from categoria where id=".$this->id;
		$ord=$this->conexion->get($sql);$ord=$ord["orden"];
		$sql="select min(orden) as ord from categoria";
		$min=$this->conexion->get($sql);
		$min=$min["ord"];
		if($ord != $min){
			$sql="update categoria set orden=".$ord." where orden=".($ord - 1);
			$this->conexion->delete($sql);
			$sql="update categoria set orden=".($ord - 1)." where id=".$this->id;
			$this->conexion->delete($sql);
		}
	}
}

?>