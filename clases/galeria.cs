<?php

class galeria{

	public $id;
	public $fotos;
	private $conexion;
	
	function galeria($id){
	if($id != 0){
		$this->conexion=new bd("alfacatering");
		$sql="select id,foto1,foto2,foto3,foto4,foto5,foto6,foto7,foto8,foto9,foto10 from galerias where id=".$id;
		$g=$this->conexion->get($sql);
		$this->id=$g["id"];
		$this->fotos=array();
		$h=0;
		for($i=1;$i <= 10;$i++){
			if($g["foto".$i] != 0){
				$this->fotos[$h]=new foto($g["foto".$i]);$h++;
			}
		}
	}else{$this->id=0;$this->fotos=array();}
	}
	
	public function edit($n,$foto){
		$sql="update galerias set foto".$n."=".$foto." where id=".$this->id;
		$this->conexion->delete($sql);
	}

}

?>