<div class="categorias">
	<div class="mensaje">
		<input  type="hidden" name=""/> 
	</div>
	
<div class="titulo">Editar Notas</div> 
	
<div class="tablacat">
	<table >
	
	<?php foreach($pros as $c){ ?>
	<tr>
		<td ></td>
		<td ></td>
		<td style="width:380px;height:60px;">
		<div class="fotonota">
		<img class="fotochica" src="<?php echo $c->foto->url; ?>">
		<?php echo $c->fecha; ?>
		<?php echo $c->titulo; ?>
		</div> </td>
		<td><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="delete" value="" style="background-image:url('/views/images/btn-eliminar.jpg');"/></form></td>
		<td><form action="/?cat=amnota" method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/><input type="hidden" name="am" value="edit" />
		<input type="submit" name="amcategoria" value="" style="background-image:url('/views/images/btn-modificar.jpg');"/></form></td>
	</tr>
	<?php } ?>
	
	
	<tr>
		<td ></td>
	</tr>
	<tr>
		<td ><form action="/?cat=amnota" method="post">
		<input type="hidden" name="id" value="0"/><input type="hidden" name="am" value="new" />
		<input type="submit" name="amcategoria" value="" style="background-image:url('/views/images/btn-nuevo.jpg');"/></form></td>
	</tr>
	</table>
		</div>
</div>