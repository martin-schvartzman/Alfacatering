<center>
<div id="main">
	<div id="banner">	
	</div>
	<div id="botonera">
		<?php if($log){ ?>
		<a href="/?cat=home"><div class="boton">HOME</div></a>
		<a href="/?cat=abmcategorias"><div class="boton">CATEGORIAS</div></a>
		<a href="/?cat=abmsubcategorias"><div class="boton">SUBCATEGORIAS</div></a>
		<a href="/?cat=abmproductos"><div class="boton">PRODUCTOS</div></a>
		<a href="/?cat=abmnotas"><div class="boton">NOTAS</div></a>
		<a href="/?cat=abmdestacados"><div class="boton">DESTACADOS</div></a>
		<a href="/?cat=unlog"><div id="logout">Log Out</div></a>
		<?php } ?>
	</div>
	<div id="contenido">
		<?php include($diseno); ?>
	</div>
	<div class="pie" id="pie">
  	<div class="textopie">ALFA CATERING</div>
	<div class="textopie2"><a href="http://www.minimalweb.com.ar/" target="_blank">MINIMAL WEB</a></div>
</div>
</div>
<center>