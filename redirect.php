<?php
session_start();
$sub="";
$array=explode(".",$_SERVER['HTTP_HOST']);
if(count($array) == 4 ){
$sub=$array[0];
}

if($sub=="www"){
Header( "HTTP/1.1 301 Moved Permanently" ); 
Header( "Location: http://bibliotecalangeley.com.ar".$_SERVER['REQUEST_URI'] ); 
}

if($sub=="admin"){
include("/views/admin.php");
}else{
include("/views/index.php");
}

?>