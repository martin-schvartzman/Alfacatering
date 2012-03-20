<div class="categorias">
	<div class="mensaje">
		<input  type="hidden" name="mensaje"/> 
	</div> 
<div class="titulo">Editar Categoria</div>	

<div class="tablacat">
	<table >
	
	<?php foreach($cats as $c){ ?>
	<tr>
		<td ><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="bajar" value="" style="cursor:pointer;border:0px;padding:0px;height:22px;width:22px;background-image:url('/views/images/btn-bajar.jpg');"/></form></td>
		<td ><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="subir" value="" style="cursor:pointer;border:0px;padding:0px;height:22px;width:22px;background-image:url('/views/images/btn-subir.jpg');"/></form></td>
		<td><div style="padding:20px;"><span class="texto" ><?php echo $c->nombre; ?></span></div> </td>
		<td><form method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="delete" value="" style="cursor:pointer;border:0px;padding:0px;height:22px;width:22px;background-image:url('/views/images/btn-eliminar.jpg');"/></form></td>
		<td><form action="/?cat=amcategoria" method="post">
		<input type="hidden" name="id" value="<?php echo $c->id; ?>"/>
		<input type="submit" name="amcategoria" value="" style="cursor:pointer;border:0px;padding:0px;height:22px;width:22px;background-image:url('/views/images/btn-modificar.jpg');"/></form></td>
	</tr>
	
	<?php } ?>
	
	<tr>
		<td ></td>
	</tr>
	<tr>
		<td ><form action="/?cat=amcategoria" method="post">
		<input type="hidden" name="id" value="0"/>
		<input type="submit" name="amcategoria" value="" style="cursor:pointer;border:0px;padding:0px;height:22px;width:22px;background-image:url('/views/images/btn-nuevo.jpg');"/></form>
	</tr>
	</table>
		</div>
</div>