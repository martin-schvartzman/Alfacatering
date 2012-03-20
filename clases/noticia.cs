<?php
class noticia{
	public $id;
	public $fecha;
	public $titulo;
	public $texto;
	public $video;
	public $foto;
	public $galeria;
	public $destacado;
	private $conexion;
	
	function noticia($id){
		$this->conexion=new bd("alfacatering");
		$sql="select * from noticias where id=".$id."";
		$not=$this->conexion->get($sql);
		$this->id=$not["id"];
		$this->fecha=$not["fecha"];
		$this->titulo=$not["titulo"];
		$this->texto=$not["texto"];
		$this->video=$not["video"];
		$this->destacado=$not["destacado"];
		$this->foto=new foto($not["foto"]);
		$this->galeria=new galeria($not["galeria"]);
	}
	
	public function delete(){
		$sql="delete from noticias where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function edit($fecha,$titulo,$texto,$video,$f){
		if($f != 0)
			$f=",foto=".$f;
		else
			$f="";
		
		$sql="update noticias set fecha='".$fecha."',titulo='".$titulo."',texto='".$texto."',video='".$video."' ".$f." where id=".$this->id." ";
		$this->conexion->delete($sql);
	}
}
?>