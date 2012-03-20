 <div class="destacados" id="destacados">
 <table>
	<tr>
		<td colspan="9" ></td>
	</tr>
	<tr>
		<td >
		
		
		
		
		
		<?php if(isset($desp[0])){ ?><a href="/?cat=producto&id=<?php if(isset($desp[0]))echo $desp[0]->id; ?>"><?php } ?>
			<table class="foto" background="<?php if(isset($desp[0]))echo $desp[0]->descripcion->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desp[0]))echo $desp[0]->nombre; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
			</table><?php if(isset($desp[0])){ ?></a><?php } ?>
			
			
			
			
			
		</td>
        <td>&nbsp;</td>
		<td>
		
		
		
		
	<?php if(isset($desp[1])){ ?>	<a href="/?cat=producto&id=<?php if(isset($desp[1]))echo $desp[1]->id; ?>"><?php } ?>
				<table class="foto" background="<?php if(isset($desp[1]))echo $desp[1]->descripcion->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desp[1]))echo $desp[1]->nombre; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
			</table><?php if(isset($desp[1])){ ?></a><?php } ?>
			
			
			
			
			
		</td>
        <td>&nbsp;</td>
		<td>
		
		
		
		
		<?php if(isset($desp[2])){ ?><a href="/?cat=producto&id=<?php if(isset($desp[2]))echo $desp[2]->id; ?>"><?php } ?>
						<table class="foto" background="<?php if(isset($desp[2]))echo $desp[2]->descripcion->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desp[2]))echo $desp[2]->nombre; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
			</table><?php if(isset($desp[2])){ ?></a><?php } ?>
			
			
			
			
			
		</td>
        <td>&nbsp;</td>
	
	<td>
	
	<?php if(isset($desp[3])){ ?><a href="/?cat=producto&id=<?php if(isset($desp[3]))echo $desp[3]->id; ?>"><?php  } ?>
	
							<table class="foto" background="<?php if(isset($desp[3]))echo $desp[3]->descripcion->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desp[3]))echo $desp[3]->nombre; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
			</table><?php if(isset($desp[3])){ ?></a><?php } ?>
			
			
			
			
			
		</td>
           <td>&nbsp;</td>
		<td><?php if(isset($desp[4])){ ?><a href="/?cat=producto&id=<?php if(isset($desp[4]))echo $desp[4]->id; ?>"><?php } ?>
				<table class="foto" background="<?php if(isset($desp[4]))echo $desp[4]->descripcion->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desp[4]))echo $desp[4]->nombre; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
			</table><?php if(isset($desp[4])){ ?></a><?php } ?>
		</td>
   <td>&nbsp;</td>

	
        </tr>
      </table>
</div>
            
<div class="noticias" id="noticias">
			  <table >
                <tr>
                  <td colspan="7" class="titulo">NOTICIAS</td>
                </tr>
                <tr>
                  <td>
				  
<style>
#n1,#n2,#n3,#n4{
width:230px;height:106px;margin-top:0px
}
</style>
				  
		<?php if(isset($desn[0])){ ?><a href="/?cat=nota&id=<?php if(isset($desn[0]))echo $desn[0]->id; ?>"><?php } ?>
				  <table class="foto" id="n1" 
				  background="<?php if(isset($desn[0]))echo $desn[0]->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desn[0]))echo $desn[0]->titulo; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
				</table>
		  <?php if(isset($desn[0])){ ?></a><?php } ?>
		  
		  </td>
                  <td>&nbsp;</td>
                  <td>
		  
		 <?php if(isset($desn[1])){ ?> <a href="/?cat=nota&id=<?php if(isset($desn[1]))echo $desn[1]->id; ?>"><?php } ?>
		   <table class="foto"  id="n2" 
				  background="<?php if(isset($desn[1]))echo $desn[1]->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desn[1]))echo $desn[1]->titulo; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
				</table>
		  <?php if(isset($desn[1])){ ?></a><?php } ?>
		  
		  
		  
		  </td>
                  <td>&nbsp;</td>
                  <td>
		  
		  
		  
		  
		 <?php if(isset($desn[2])){ ?> <a href="/?cat=nota&id=<?php if(isset($desn[2]))echo $desn[2]->id; ?>"><?php } ?>
		   <table class="foto"  id="n3" 
				  background="<?php if(isset($desn[2]))echo $desn[2]->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desn[2]))echo $desn[2]->titulo; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
				</table>
		  <?php if(isset($desn[2])){ ?></a><?php } ?>
		  
		  
		  
		  </td>
                  <td>&nbsp;</td>
                  <td>
		  
		  
		  
		 <?php if(isset($desn[3])){ ?> <a href="/?cat=nota&id=<?php if(isset($desn[3]))echo $desn[3]->id; ?>"><?php } ?>
				   <table class="foto"  id="n4" 
				  background="<?php if(isset($desn[3]))echo $desn[3]->foto->url; ?>">
				<tr>
					<td class="titulofoto"><?php if(isset($desn[3]))echo $desn[3]->titulo; ?></td>
				</tr>
				<tr>
					<td></td>
				</tr>
				</table>
		 <?php if(isset($desn[3])){ ?> </a><?php } ?>
		  </td>
                </tr>
              </table>
	
			</div>
    
