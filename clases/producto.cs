<?php
class producto{
	public $id;
	public $nombre;
	public $descripcion;
	public $orden;
	public $destacado;
	public $subcat;
	private $conexion;
	
	function producto($id){
		$this->conexion=new bd("alfacatering");
		$sql="select * from productos where id=".$id." order by orden asc";
		$categoria=$this->conexion->get($sql);
		$this->id=$categoria["id"];
		$this->orden=$categoria["orden"];
		$this->nombre=$categoria["nombre"];
		$this->subcat=$categoria["subcategoria"];
		$this->destacado=$categoria["destacado"];
		$this->descripcion=new noticia($categoria["noticia"]);
	}
	
	public function related(){
		$sql="select id from productos where not id=".$this->id." and subcategoria=".$this->subcat." order by orden asc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new producto($s["id"]);
			$i++;
		}
		return $sub;
	}
	
	public function delete(){
		$x=new destacados();
		if($x->isdestacadop($this->id)){
			$sql="select * from destacados";
			$p=$this->conexion->get($sql);
			for($i = 1 ;$i <= 5; $i++){
				if($p["p".$i]==$this->id)$x->deletep($i);
			}
		}
		$sql="delete from productos where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function edit($nombre){
		$sql="update productos set nombre='".$nombre."' where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function bajar(){
		$sql="select orden from productos where id=".$this->id." and subcategoria=".$this->subcat;
		$ord=$this->conexion->get($sql);$ord=$ord["orden"];
		$sql="select max(orden) as ord from productos where subcategoria=".$this->subcat;
		$max=$this->conexion->get($sql);
		$max=$max["ord"];
		if($ord != $max){
			$sql="update productos set orden=".$ord." where orden=".($ord + 1);
			$this->conexion->delete($sql);
			//echo $sql;
			$sql="update productos set orden=".($ord + 1)." where id=".$this->id;
			$this->conexion->delete($sql);
		}
	}
	
	public function subir(){
		$sql="select orden from productos where id=".$this->id." and subcategoria=".$this->subcat;
		$ord=$this->conexion->get($sql);$ord=$ord["orden"];
		$sql="select min(orden) as ord from productos where subcategoria=".$this->subcat;
		$min=$this->conexion->get($sql);
		$min=$min["ord"];
		if($ord != $min){
			$sql="update productos set orden=".$ord." where orden=".($ord - 1);
			$this->conexion->delete($sql);
			$sql="update productos set orden=".($ord - 1)." where id=".$this->id;
			$this->conexion->delete($sql);
		}
	}
	
}
?>