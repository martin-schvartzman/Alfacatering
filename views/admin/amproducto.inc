<div style="height:800px;">
	<div class="mensaje">
		<input  type="hidden" name="mensaje"/> 
	</div> 


<div class="titulo">Editar Producto</div> 
	

	
<form enctype="multipart/form-data"  action="/?cat=abmproductos&sub=<?php echo $_POST["sub"]; ?>&cgy=<?php echo $_POST["cat"]; ?>" method="POST">
<fieldset id="form">

<table >	<tr>
<td>Nombre</td>
		<td>
		<input type="text" name="nombre" value="<?php if(!$new)echo $produ->nombre ?>" size="40"></td>
		
		<td>&nbsp;</td>
		<td>&nbsp;</td>
	</tr>
	<tr><td>Titulo</td>
		<td>
			<input type="text" name="titulo" value="<?php if(!$new)echo $produ->descripcion->titulo; ?>" size="40"></td>
		<td>Video
	    <input type="checkbox" <?php if(!$new){if($produ->descripcion->video != 0) echo " checked ";} ?>name="checkvideo" /></td>
		<td>
			
			<input type="text" name="video" value="<?php if(!$new)echo $produ->descripcion->video; ?>" size="30"></td>
		
	</tr>

	<tr>
	<td>Fecha</td>
		<td>
			<select name="mes" size="1">
				<?php if(!$new) echo '<option value="'.$mon.'">'.$mon.'</option>'; ?>
				<option value="01">Enero</option>
				<option value="02">Febrero</option>
				<option value="03">Marzo</option>
				<option value="04">Abril</option>
				<option value="05">Mayo</option>
				<option value="06">Junio</option>
				<option value="07">Julio</option>
				<option value="08">Agosto</option>
				<option value="09">Septiembre</option>
				<option value="10">Octubre</option>
				<option value="11">Noviembre</option>
				<option value="12">Diciembre</option>
			</select>

			<select name="dia">
				<?php if(!$new) echo '<option value="'.$day.'">'.$day.'</option>'; ?>
				<option value="1">1</option>
				<option value="2">2</option>
				<option value="3">3</option>
				<option value="4">4</option>
				<option value="5">5</option>
				<option value="6">6</option>
				<option value="7">7</option>
				<option value="8">8</option>
				<option value="9">9</option>
				<option value="10">10</option>
				<option value="11">11</option>
				<option value="12">12</option>
				<option value="13">13</option>
				<option value="14">14</option>
				<option value="15">15</option>
				<option value="16">16</option>
				<option value="17">17</option>
				<option value="18">18</option>
				<option value="19">19</option>
				<option value="20">20</option>
				<option value="21">21</option>
				<option value="22">22</option>
				<option value="23">23</option>
				<option value="24">24</option>
				<option value="25">25</option>
				<option value="26">26</option>
				<option value="27">27</option>
				<option value="28">28</option>
				<option value="29">29</option>
				<option value="30">30</option>
				<option value="31">31</option>
			</select>

			<select name="anio">
				<?php if(!$new) echo '<option value="'.$yea.'">'.$yea.'</option>'; ?>
				<option value="2011">2011</option>
				<option value="2012">2012</option>
			</select></td>
		<td>Foto
        <input <?php if(!$new){ echo "checked"; }?> type="checkbox" name="checkfoto" /></td>
		<td>
		<?php if(!$new){ ?>
		<img style="height:100px;width:100px;" id="imgfotoarch" src="<?php echo $produ->descripcion->foto->url; ?>"/><br/>
		<?php } ?>
		<input id="fotoarch" type="file" name="foto" /></td>
		
	</tr>
	
	<tr><td>Descripcion</td>
		<td>
			<textarea name="descripcion" id="comment" cols="35" rows="10"><?php if(!$new) echo $produ->descripcion->texto; ?></textarea></td>
		
		<td colspan="2">
		  
	    </td>
	</tr>
</table>
<br/><br/>Galeria (Max Size: 600x600)
<input type="checkbox" <?php if(!$new && isset($produ->descripcion->galeria->fotos[0])){echo 'checked';}?> name="checkgal" /><br/>
<div style="width:500px;height:80px;">
	<div style="display:block;" class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[0]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[0]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo1" /> Foto 1</div>
	<div id="fotoarch1" <?php if(!$new && isset($produ->descripcion->galeria->fotos[1])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[1]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[1]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo2" /> Foto 2</div>
	<div id="fotoarch2" <?php if(!$new && isset($produ->descripcion->galeria->fotos[2])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[2]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[2]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo3" /> Foto 3</div>
</div>
<div style="width:500px;height:80px;">
	<div id="fotoarch3" <?php if(!$new && isset($produ->descripcion->galeria->fotos[3])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[3]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[3]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo4" /> Foto 4</div>
	<div id="fotoarch4" <?php if(!$new && isset($produ->descripcion->galeria->fotos[4])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[4]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[4]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo5" /> Foto 5</div>
	<div id="fotoarch5" <?php if(!$new && isset($produ->descripcion->galeria->fotos[5])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[5]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[5]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo6" /> Foto 6</div>
</div>
<div style="width:500px;height:80px;">
	<div id="fotoarch6" <?php if(!$new && isset($produ->descripcion->galeria->fotos[6])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[6]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[6]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo7" /> Foto 7</div>
	<div id="fotoarch7" <?php if(!$new && isset($produ->descripcion->galeria->fotos[7])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[7]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[7]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo8" /> Foto 8</div>
	<div id="fotoarch8" <?php if(!$new && isset($produ->descripcion->galeria->fotos[8])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[8]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[8]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo9" /> Foto 9</div>
</div>
<div style="width:500px;height:80px;">
	<div id="fotoarch9" <?php if(!$new && isset($produ->descripcion->galeria->fotos[9])){echo 'style="display:block;"';} ?> class="inputfotogal">
	<?php if(!$new && isset($produ->descripcion->galeria->fotos[9]))
	{ echo '<img style="height:50px;width:50px;" src="'.$produ->descripcion->galeria->fotos[9]->url.'" /><br/>';  } ?>
	<input type="file" name="fotoarchivo10" /> Foto 10</div>
</div>


<input type="submit" name="<?php echo $_POST["amproducto"]; ?>" class="btn" value="Enviar" />

<input type="hidden" name="id" value="<?php if($new)echo "0"; else echo $produ->id; ?>"/>
</fieldset>
</form>	
	
	
</div><br/><br/><br/><br/><br/><br/><br/>