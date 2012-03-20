<?php
class noticias{
	private $conexion;
	
	function noticias(){
		$this->conexion=new bd("alfacatering");
	}
	
	public function traer(){
		$sql="select id from noticias where id not in (select noticia from productos) order by fecha asc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new noticia($s["id"]);
			$i++;
		}
		return $sub;
	}
	
	public function destacados(){
		$sql="select id from noticias where destacado > 0 and destacado < 5 order by fecha asc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new noticia($s["id"]);
			$i++;
		}
		return $sub;
	}
	
	public function add($fecha,$titulo,$texto,$vid,$fot,$gal){
		$yy=new pictures();
		if($gal==0)$gal=$yy->makeg(0,0,0,0,0,0,0,0,0,0);
		$sql="insert into noticias (fecha,titulo,texto,video,foto,galeria) values ('".$fecha."','".$titulo."','".$texto."','".$vid."',".$fot.",".$gal.")";
		return $this->conexion->insert($sql);
	}
}
?>