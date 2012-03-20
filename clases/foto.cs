<?php
class foto{
	public $id;
	public $url;
	public $galeria;
	public $picid;
	public $descripcion;
	
	private $conexion;
	
	function foto($id){
	if($id != 0){
		$this->conexion=new bd("alfacatering");
		$sql="select * from fotos where id=".$id;
		$f=$this->conexion->get($sql);
		$this->id=$f["id"];
		$this->url=$f["url"];
		$this->picid=$f["picid"];
		$this->galeria=$f["galeria"];
		$this->descripcion=$f["descripcion"];
	}else{$this->id=0;}
	}
	
	public function delete(){
		$p=new pictures();
		$p->delete($this->picid);
		$sql="delete from fotos where id=".$this->id;
		$this->conexion->query($sql);
	}
	
	
}
?>