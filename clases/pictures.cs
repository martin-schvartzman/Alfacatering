<?php
class pictures{
	private $conexionbd;
	private $conexionpic;
	
	function pictures(){
		$this->conexionbd=new bd("alfacatering");
		$this->conexionpic=new picasa("martins@minimalweb.com.ar","12345678");
	}
	
	public function makef($file){
		if($file=='0'){
		return 0;
		}else{
		$pic=$this->conexionpic->upload($file);
		$sql="insert into fotos (picid,url) values ('".$pic["id"]."','".$pic["img"]."')";
		return $this->conexionbd->insert($sql);}
	}
	
	public function makeg($f1,$f2,$f3,$f4,$f5,$f6,$f7,$f8,$f9,$f10){
		$f1=$this->makef($f1);
		$f2=$this->makef($f2);
		$f3=$this->makef($f3);
		$f4=$this->makef($f4);
		$f5=$this->makef($f5);
		$f6=$this->makef($f6);
		$f7=$this->makef($f7);
		$f8=$this->makef($f8);
		$f9=$this->makef($f9);
		$f10=$this->makef($f10);
		$sql="insert into galerias (foto1,foto2,foto3,foto4,foto5,foto6,foto7,foto8,foto9,foto10) values (".$f1.",".$f2.",".$f3.",".$f4.",".$f5.",".$f6.",".$f7.",".$f8.",".$f9.",".$f10.")";
		//var_dump($sql);
		return $this->conexionbd->insert($sql);
	}
	
	public function delete($id){
		$this->conexionpic->delete($id);
	}
}
?>