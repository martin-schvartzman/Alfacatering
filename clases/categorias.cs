<?php
class categorias{
	private $conexion;
	
	function categorias(){
	$this->conexion=new bd("alfacatering");
	}
	
	public function traer(){
		$sql="select id from categoria order by orden desc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new categoria($s["id"]);
			$i++;
		}
		return $sub;
	}
	
	public function add($nombre){
		$sql="select max(orden) as ord from categoria";
		$ord=$this->conexion->get($sql);
		$ord=$ord["ord"];
		$ord++;
		$sql="insert into categoria (nombre,orden) values ('".$nombre."',".$ord.")";
		return $this->conexion->insert($sql);
	}
	
	public function destacados(){
		$sql="select id from productos where destacado > 0 and destacado < 6 order by destacado desc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new producto($s["id"]);
			$i++;
		}
		return $sub;
	}
}
?>