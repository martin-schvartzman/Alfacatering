<?php
class subcat{
	public $id;
	public $nombre;
	public $descripcion;
	public $orden;
	public $categoria;
	private $conexion;
	
	function subcat($id){
		$this->conexion=new bd("alfacatering");
		$sql="select id,nombre,orden,descripcion,categoria from subcategoria where id=".$id;
		$categoria=$this->conexion->get($sql);
		$this->id=$categoria["id"];
		$this->orden=$categoria["orden"];
		$this->nombre=$categoria["nombre"];
		$this->descripcion=$categoria["descripcion"];
		$this->categoria=$categoria["categoria"];
	}
	
	public function traer(){
		$sql="select id from productos where subcategoria=".$this->id." order by orden asc";
		$subcats=$this->conexion->query($sql);
		$sub=array();
		$i=0;
		foreach($subcats as $s){
			$sub[$i]=new producto($s["id"]);
			$i++;
		}
		return $sub;
	}
	
	public function first(){
		$sql="select id from productos where subcategoria=".$this->id." order by orden asc";
		$s=$this->conexion->get($sql);
		return new producto($s["id"]);
	}
	
	public function contar(){
		$sql="select count(*) as c from productos where subcategoria=".$this->id;
		$subcats=$this->conexion->get($sql);
		return $subcats["c"];
	}
	
	public function delete(){
		$subs=$this->traer();
		foreach($subs as $s){
		$s->delete();
		}
		$sql="delete from subcategoria where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function edit($nombre,$descripcion,$orden){
		$sql="update subcategoria set nombre='".$nombre."',descripcion='".$descripcion."',categoria=".$orden." where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function add($nombre,$noticia){
	$sql="select max(orden) as ord from productos where subcategoria=".$this->id;
		$ord=$this->conexion->get($sql);
		$ord=$ord["ord"];
		$ord++;
		$sql="insert into productos (nombre,noticia,orden,subcategoria) values('".$nombre."',".$noticia.",".$ord.",".$this->id.")";
		return $this->conexion->insert($sql);
	}
	
	public function subir(){
		$sql="select orden from subcategoria where id=".$this->id;
		$ord=$this->conexion->get($sql);$ord=$ord["orden"];
		$sql="select max(orden) as ord from subcategoria";
		$max=$this->conexion->get($sql);
		$max=$max["ord"];
		if($ord != $max){
			$sql="update subcategoria set orden=".$ord." where orden=".($ord + 1);
			$this->conexion->delete($sql);
			//echo $sql;
			$sql="update subcategoria set orden=".($ord + 1)." where id=".$this->id;
			$this->conexion->delete($sql);
		}
	}
	
	public function bajar(){
		$sql="select orden from subcategoria where id=".$this->id;
		$ord=$this->conexion->get($sql);$ord=$ord["orden"];
		$sql="select min(orden) as ord from subcategoria";
		$min=$this->conexion->get($sql);
		$min=$min["ord"];
		if($ord != $min){
			$sql="update subcategoria set orden=".$ord." where orden=".($ord - 1);
			$this->conexion->delete($sql);
			$sql="update subcategoria set orden=".($ord - 1)." where id=".$this->id;
			$this->conexion->delete($sql);
		}
	}
}
?>