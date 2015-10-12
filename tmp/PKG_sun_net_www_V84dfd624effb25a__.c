#include <stdlib.h>
#include <stdio.h>
#include "jamaica.h"
#include "jni.h"
#include "jbi.h"
#include "Main__.h"


#ifdef __JAMAICA__

#ifdef __cplusplus
extern "C" {
#endif


JBIEXPORT jamaica_ref JBICALL jam_comp_sun_net_www_ParseUtil_9_encodePath2(jamaica_thread *ct,jamaica_ref r1,jamaica_int32 n4) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 n7=0,n10=0,n1=0,n2=0,n5=0,n6=0,n8=0,n9=0,n11=0,n12=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+3;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=((JAMAICA_BLOCK_GET_DATA32(r1,3).i>>4) &  ((jamaica_int32)268435455));
 n6=JAMAICA_ADDS32(JAMAICA_MULS32(n5,2),16);
 if ((n6<0)) { goto LABEL_tNASE; }
 r2=jamaicaInterpreter_allocSimpleArray(ct,n6,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n6=0;
 if ((n5<0)) { goto LABEL_tNASE; }
 r3=jamaicaInterpreter_allocSimpleArray(ct,n5,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 Jam_java_lang_String_copyChars(ct,r1,0,r3,0,n5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r1=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n7=0;
 n2=0;
 n1=0;
 if (r1==JAMAICA_NULL) { goto l4; }
 n1=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 n1=(n1&15);
l4:
 n8=n4;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_net_www_ParseUtil_9_encodnPath0,7).r;
l5:
 if (n7>=n5) { goto l31; }
 n9=n7;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAYU16(r1,n9,n9);
 n10=n9;
 if (n8!=0) { goto l8; }
 if (n9==47) { goto l10; }
l8:
 if (n4==0) { goto l11; }
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_java_io_File_23,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_io_File_23,-1);
 }
 if (n10!=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_io_File_23_separrChar3,4).i) { goto l11; }
l10:
 n9=n6;
 n6=JAMAICA_ADDS32(n9,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n10=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(((n10>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n11=(n10&15);
 JAMAICA_SET_ARRAY16(r2,n9,47);
 goto l25;
l11:
 n9=n10;
 if (n9>127) { goto l22; }
 n9=n10;
 if (n9<97) { goto l14; }
 if (n9<=122) { goto l18; }
l14:
 n9=n10;
 if (n9<65) { goto l16; }
 if (n9<=90) { goto l18; }
l16:
 n9=n10;
 if (n9<48) { goto l19; }
 if (n9>57) { goto l19; }
l18:
 n9=n6;
 n6=JAMAICA_ADDS32(n9,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(((n11>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n12=(n11&15);
 JAMAICA_SET_ARRAY16(r2,n9,n10);
 goto l25;
l19:
 r3=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 n9=n10;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_BitSet_25_get11,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n11,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,n9);
}
 if (n11==0) { goto l21; }
{ jamaica_ref m=jam_mtd_sun_net_www_ParseUtil_9_escape3;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n10,n6);
}
 goto l25;
l21:
 n10=n6;
 n6=JAMAICA_ADDS32(n10,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(((n11>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n12=(n11&15);
 JAMAICA_SET_ARRAY16(r2,n10,n9);
 goto l25;
l22:
 if (n9<=2047) { goto l24; }
{ jamaica_ref m=jam_mtd_sun_net_www_ParseUtil_9_escape3;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,((224|(((n10>>12) |  ((n10>=0)?0:(jamaica_int32)(-1048576)))&15))&65535),n6);
}
{ jamaica_ref m=jam_mtd_sun_net_www_ParseUtil_9_escape3;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,((128|(((n10>>6) |  ((n10>=0)?0:(jamaica_int32)(-67108864)))&63))&65535),n6);
}
{ jamaica_ref m=jam_mtd_sun_net_www_ParseUtil_9_escape3;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,((128|(n10&63))&65535),n6);
}
 goto l25;
l24:
{ jamaica_ref m=jam_mtd_sun_net_www_ParseUtil_9_escape3;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,((192|(((n9>>6) |  ((n9>=0)?0:(jamaica_int32)(-67108864)))&31))&65535),n6);
}
{ jamaica_ref m=jam_mtd_sun_net_www_ParseUtil_9_escape3;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,((128|(n9&63))&65535),n6);
}
l25:
 r3=r2;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n9=((n9>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(n6,9)<=n9) { goto l29; }
 n9=JAMAICA_ADDS32(JAMAICA_MULS32(n9,2),16);
 n10=n9;
 if (n9>=0) { goto l28; }
 n10=2147483647;
l28:
 if ((n10<0)) { goto LABEL_tNASE; }
 r3=jamaicaInterpreter_allocSimpleArray(ct,n10,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r2,0,r3,0,n6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r2=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l29:
 n7=JAMAICA_ADDS32(n7,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l5; }
 jamaicaScheduler_syncPointFull(ct);
 goto l5;
l31:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n5=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_String_134,5).i;
 if (((n5>>20) |  ((n5>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_String_134,-1);
 }
 if (ct->plainAlloc) {
  r1 = jamaicaGC_PlainAllocHeadBlock(ct,2);
  if (r1 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r1,1)=jam_class_java_lang_String_134;
  }
 } else {
 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_String_134);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
 n5=n6;
 r3=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n6=0;
 n7=n5;
 if (n5<0) { goto l34; }
 n1=n6;
 if (n1<0) { goto l34; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n1<=JAMAICA_SUBS32(((JAMAICA_BLOCK_GET_DATA32(r2,3).i>>4) &  ((jamaica_int32)268435455)),n5)) { goto l35; }
l34:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinption_145);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=jam_comp_java_lang_Strinilder_140_append4(ct,r2,jam_str_java_lang_String_1348);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_append13(ct,r2,n6);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_append4(ct,r2,jam_str_java_lang_String_13411);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_append13(ct,r2,n7);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_append4(ct,r2,jam_str_java_lang_String_13412);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r2=jam_comp_java_lang_Strinilder_140_append13(ct,r2,((JAMAICA_BLOCK_GET_DATA32(r3,3).i>>4) &  ((jamaica_int32)268435455)));
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_toString20(ct,r2);
{ jamaica_ref m=jam_mtd_java_lang_Strinption_145__00030003e2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r1);
l35:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 Jam_java_lang_String_allocString(ct,r1,n5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 Jam_java_lang_String_copyChars(ct,r2,n1,r1,0,n5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=3;
 return r1;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return JAMAICA_NULL;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return JAMAICA_NULL;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

