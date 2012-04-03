<div id="jqgallery">
<center>

<div id="containerjq">
<div id="closejq">
	<img src="/views/images/btn-eliminar.jpg" 
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
	<table background="<?php echo $produ->descripcion->foto->url; ?>">
			
				<tr>
					<td></td>
				</tr>
			</table>		
</div>
	
<div class="detalles" id="detalles">
	<div class="titulo"><?php echo $produ->descripcion->titulo; ?></div>
	<div class="texto"><?php echo nl2br($produ->descripcion->texto); //var_dump($produ->descripcion->galeria->fotos );?></div>
	
	
	<?php $i=0;	foreach($produ->descripcion->galeria->fotos as $f){ ?>
	<div class="galeria">
		<img index="<?php echo $i; ?>" src="<?php echo $f->url; ?>" />
	</div>
	<?php $i++;} ?>
	
	
</div>
<?php //var_dump($produ->descripcion);
if($produ->descripcion->video != "0"){ ?>	
<div class="video" id="video">
		<div class="titulo">Video</div>
		
		<iframe width="175" height="121" src="http://www.youtube.com/embed/<?php echo $produ->descripcion->video;?>" frameborder="0" allowfullscreen></iframe>
		
</div>
<?php } ?>

<div class="productos" id="productos">
		<div class="titulo">Productos Relacionados</div><br/>
		<?php $i=0;foreach($rel as $r){ ?>
		<div class="relacionados" >
			<a href="/?cat=producto&id=<?php echo $r->id; ?>">
			<img src="<?php echo $r->descripcion->foto->url; ?>" style="width:120px;height:95px;"/>
			</a>
		</div>
		<?php if($i==4)break; $i++;} ?>
</div>


	
