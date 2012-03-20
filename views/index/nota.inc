<div id="jqgallery">
<center>

<div id="containerjq">
<div id="closejq">
	<img src="http://bibliotecalangeley.com.ar/views/images/btn-eliminar.jpg" 
	style="cursor:pointer;cursor:hand;height:25px;width:25px;" />
</div>
	<div id="fotoleft">
		<img style="margin-top:250px;" src="/views/images/btn-retroceder.jpg"/>
	</div>
	<div id="fotoframe">
	</div>
	<div id="fotoright">
		<img style="margin-top:250px;" src="/views/images/btn-avanzar.jpg"/>
	</div>
</div>

</center>
</div>

<div class="foto" id="foto">
	<table 	 background="<?php echo $produ->foto->url; ?>">
		
				<tr>
					<td></td>
				</tr>
			</table>		
</div>
	
<div class="detalles" id="detalles">
	<div class="titulo"><?php echo $produ->titulo; ?></div>
	<div class="texto"><?php echo nl2br($produ->texto) ?></div>

	

	
</div>
	
<?php if($produ->video != 0){ ?>	
<div class="video" id="video">
		<div class="titulo">Video</div>
		
		<iframe width="175" height="121" src="http://www.youtube.com/embed/<?php echo $produ->video;?>" frameborder="0" allowfullscreen></iframe>
		
</div>
<?php } ?>

<div class="productos" id="productos">
<div class="titulo">Galeria</div>

	<?php $i=0; foreach($produ->galeria->fotos as $f){ ?>
	<div class="galeria" index="<?php echo $i; ?>">
		<img index="<?php echo $i; ?>" src="<?php echo $f->url; ?>" />
	</div>
	<?php $i++;} ?>
	
	
</div>


	
