1D coupled sea ice-ocean model based on MITgcm.

The folder named 'code1_ctr',     are the code of control run.
The folder named 'code2_0Fw_Oce', are the code with the term 'Fw' is zero in the Ocean.
The folder named 'code3_0Fw_Ice', are the code with the term 'Fw' is zero in the Ice.
The folder named 'code4_0Fw_OIce',are the code with the term 'Fw' is zero in both the Ocean and Ice
The folder named 'code5_pic_0mw', are the code without the meltwater releasing, and the sea ice state can be able to keep same with the control run.


We modified the following programs of the code and highlighted where we changed it with '============================' .

This file was modified to remove the 'Fw' (meltwater) in the Ocean/Ice.
1.thsice_calc_thickn.F

These two files were modified to add some heat flux diagnostics.
1.thsice_solve4temp.F
2.diagnostics_main_init.F

These four files were modified to keep the sea ice state in the meltwater experiments same with the control experiments (only exist in 'code5_pic_0mw'):
1.seaice_model.F.           
2.seaice_read_pickup_zhh.F
3.thsice_main.F
4.thsice_read_pickup_zhh.F
