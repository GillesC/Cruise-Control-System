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


JBIEXPORT jamaica_ref JBICALL jam_comp_sun_awt_geom_AreaOp_0_pruneEdges6(jamaica_thread *ct,jamaica_ref r21,jamaica_ref r42) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r45=JAMAICA_NULL,r77=JAMAICA_NULL,r80=JAMAICA_NULL,r79=JAMAICA_NULL,r46=JAMAICA_NULL,r47=JAMAICA_NULL,r13=JAMAICA_NULL,r17=JAMAICA_NULL,r19=JAMAICA_NULL,r22=JAMAICA_NULL,r24=JAMAICA_NULL,r26=JAMAICA_NULL,r28=JAMAICA_NULL,r30=JAMAICA_NULL,r33=JAMAICA_NULL,r35=JAMAICA_NULL,r37=JAMAICA_NULL,r40=JAMAICA_NULL,r43=JAMAICA_NULL,r44=JAMAICA_NULL,r48=JAMAICA_NULL,r49=JAMAICA_NULL,r50=JAMAICA_NULL,r51=JAMAICA_NULL,r52=JAMAICA_NULL,r53=JAMAICA_NULL,r54=JAMAICA_NULL,r55=JAMAICA_NULL,r56=JAMAICA_NULL,r57=JAMAICA_NULL,r58=JAMAICA_NULL,r59=JAMAICA_NULL,r60=JAMAICA_NULL,r61=JAMAICA_NULL,r62=JAMAICA_NULL,r63=JAMAICA_NULL,r64=JAMAICA_NULL,r65=JAMAICA_NULL,r66=JAMAICA_NULL,r67=JAMAICA_NULL,r68=JAMAICA_NULL,r69=JAMAICA_NULL,r70=JAMAICA_NULL,r71=JAMAICA_NULL,r72=JAMAICA_NULL,r73=JAMAICA_NULL,r74=JAMAICA_NULL,r75=JAMAICA_NULL,r76=JAMAICA_NULL,r78=JAMAICA_NULL,r81=JAMAICA_NULL;
 jamaica_int32 n12=0,n115=0,n127=0,n116=0,n117=0,n15=0,n17=0,n18=0,n20=0,n21=0,n23=0,n24=0,n26=0,n27=0,n29=0,n30=0,n32=0,n33=0,n35=0,n36=0,n38=0,n39=0,n41=0,n42=0,n44=0,n45=0,n47=0,n48=0,n50=0,n51=0,n53=0,n55=0,n57=0,n58=0,n60=0,n61=0,n63=0,n65=0,n67=0,n69=0,n71=0,n72=0,n74=0,n76=0,n78=0,n80=0,n82=0,n84=0,n86=0,n88=0,n90=0,n92=0,n94=0,n95=0,n97=0,n98=0,n100=0,n101=0,n103=0,n105=0,n107=0,n108=0,n113=0,n114=0,n118=0,n119=0,n120=0,n121=0,n122=0,n123=0,n124=0,n125=0,n126=0,n128=0;
 jamaica_double d3=0,d5=0,d8=0,d9=0,d4=0,d6=0,d7=0;
 jamaica_ref b0=JAMAICA_NULL,b7=JAMAICA_NULL,b8=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+56;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_pruneEdges6;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r43=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r44=JAMAICA_BLOCK_GET_R(r43,1);
 r44=JAMAICA_BLOCK_GET_DATA32(r44,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n113=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_size7,1).i;
 n113=((n113>>20) &  ((jamaica_int32)4095));
 n114=JAMAICA_BLOCK_GET_DATA32(r44,3).i;
 n114=(n114&15);
 JAMAICA_GET_REF_ARRAY(r44,n113,r45);
{ jamaica_ref m=r45;
ct->calledMethod=m;
 n113=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 n12=n113;
 if (n113>=2) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-56;
 return r42;
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if ((n113<0)) { goto LABEL_tNASE; }
 r42=jamaicaInterpreter_allocSimpleArray(ct,n113,jam_typ_arr1_sun_awt_geom_Edge_12);
 n113=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_toArray24,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r44,n113,r44);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r44;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r42);
}
 if ((r42!=JAMAICA_NULL) && (((r42!=JAMAICA_NULL) && jamaicaClasses_compatibleClassRefArray(ct,JAMAICA_BLOCK_GET_R(r42,1),jam_typ_arr1_sun_awt_geom_Edge_12))==0)) { goto LABEL_tCCE; }
 if ((r42!=JAMAICA_NULL) && (((r42!=JAMAICA_NULL) && jamaicaClasses_compatibleClassRefArray(ct,JAMAICA_BLOCK_GET_R(r42,1),jam_typ_arr1_sun_awt_geom_Edge_12))==0)) { goto LABEL_tCCE; }
 r43=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jam_comp_java_util_Arrays_23_sort20(ct,r42,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_awt_geom_AreaOp_0_YXToprator0,7).r,4).r);
 n113=0;
 n114=0;
 r42=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[7]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->plainAlloc) {
  r44 = jamaicaGC_PlainAllocHeadBlock(ct,18);
  if (r44 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r44,1)=jam_class_java_util_Vector_210;
  }
 } else {
 r44=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_util_Vector_210);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r44==JAMAICA_NULL) { goto LABEL_tOOME; }
 n115=10;
 n116=n115;
 n117=0;
 JAMAICA_BLOCK_GET_DATA32(r44,3).i = 0;
 if (n115>=0) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Illegption_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_java_util_Vector_2105);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append13(ct,r43,n116);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_Illegption_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l6:
 if ((n115<0)) { goto LABEL_tNASE; }
 r45=jamaicaInterpreter_allocSimpleArray(ct,n115,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r44,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r44,4).r=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r44,4).r=new_ref;}
#endif

 JAMAICA_BLOCK_GET_DATA32(r44,6).i = n117;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (ct->plainAlloc) {
  r45 = jamaicaGC_PlainAllocHeadBlock(ct,18);
  if (r45 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r45,1)=jam_class_java_util_Vector_210;
  }
 } else {
 r45=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_util_Vector_210);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r45==JAMAICA_NULL) { goto LABEL_tOOME; }
 n115=10;
 n116=n115;
 n117=0;
 JAMAICA_BLOCK_GET_DATA32(r45,3).i = 0;
 if (n115>=0) { goto l8; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Illegption_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_java_util_Vector_2105);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append13(ct,r43,n116);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_Illegption_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l8:
 if ((n115<0)) { goto LABEL_tNASE; }
 r46=jamaicaInterpreter_allocSimpleArray(ct,n115,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r45,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r45,4).r=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r45,4).r=new_ref;}
#endif

 JAMAICA_BLOCK_GET_DATA32(r45,6).i = n117;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (ct->plainAlloc) {
  r46 = jamaicaGC_PlainAllocHeadBlock(ct,18);
  if (r46 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r46,1)=jam_class_java_util_Vector_210;
  }
 } else {
 r46=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_util_Vector_210);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (r46==JAMAICA_NULL) { goto LABEL_tOOME; }
 n115=10;
 n116=n115;
 n117=0;
 JAMAICA_BLOCK_GET_DATA32(r46,3).i = 0;
 if (n115>=0) { goto l10; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Illegption_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_java_util_Vector_2105);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append13(ct,r43,n116);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_Illegption_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l10:
 if ((n115<0)) { goto LABEL_tNASE; }
 r47=jamaicaInterpreter_allocSimpleArray(ct,n115,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r46,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r46,4).r=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r46,4).r=new_ref;}
#endif

 JAMAICA_BLOCK_GET_DATA32(r46,6).i = n117;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n116=n12;
 r47=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n117=0;
 n15=0;
 n17=0;
 n18=0;
 r13=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n20=0;
 n21=0;
 n23=0;
 n24=0;
 n26=0;
 n27=0;
 n29=0;
 n30=0;
 n32=0;
 n33=0;
 n35=0;
 n36=0;
 n38=0;
 n39=0;
 n41=0;
 n42=0;
 n44=0;
 n45=0;
 n47=0;
 n48=0;
 r17=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n50=0;
 r19=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n51=0;
 n57=0;
 n58=0;
 n60=0;
 n61=0;
 n71=0;
 n72=0;
 r33=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r33;}
#else
{jamaica_ref new_ref=r33;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n82=0;
 n84=0;
 r37=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r37;}
#else
{jamaica_ref new_ref=r37;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n90=0;
 n92=0;
 n94=0;
 n95=0;
 n97=0;
 n98=0;
 n100=0;
 n101=0;
 r40=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r40;}
#else
{jamaica_ref new_ref=r40;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n103=0;
 n105=0;
 n107=0;
 n108=0;
 if (r47==JAMAICA_NULL) { goto l12; }
 n115=JAMAICA_BLOCK_GET_DATA32(r47,3).i;
 n117=((n115>>4) &  ((jamaica_int32)268435455));
 n15=(n115&15);
l12:
 r48=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 if (r48==JAMAICA_NULL) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n17=((n115>>4) &  ((jamaica_int32)268435455));
 n18=(n115&15);
 r13=JAMAICA_BLOCK_GET_R(r48,1);
 b0=JAMAICA_BLOCK_GET_DATA32(r13,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r13=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l14:
 n118=n12;
 r49=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 if (r49==JAMAICA_NULL) { goto l16; }
 n115=JAMAICA_BLOCK_GET_DATA32(r49,3).i;
 n20=((n115>>4) &  ((jamaica_int32)268435455));
 n21=(n115&15);
l16:
 r50=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r50;}
#else
{jamaica_ref new_ref=r50;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 if (r50==JAMAICA_NULL) { goto l18; }
 n115=JAMAICA_BLOCK_GET_DATA32(r50,3).i;
 n23=((n115>>4) &  ((jamaica_int32)268435455));
 n24=(n115&15);
l18:
 r51=r44;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r51;}
#else
{jamaica_ref new_ref=r51;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 r52=r45;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r52;}
#else
{jamaica_ref new_ref=r52;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 r53=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r53;}
#else
{jamaica_ref new_ref=r53;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 if (r53==JAMAICA_NULL) { goto l20; }
 n115=JAMAICA_BLOCK_GET_DATA32(r53,3).i;
 n26=((n115>>4) &  ((jamaica_int32)268435455));
 n27=(n115&15);
l20:
 n119=n12;
 r54=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r54;}
#else
{jamaica_ref new_ref=r54;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 if (r54==JAMAICA_NULL) { goto l22; }
 n115=JAMAICA_BLOCK_GET_DATA32(r54,3).i;
 n29=((n115>>4) &  ((jamaica_int32)268435455));
 n30=(n115&15);
l22:
 r55=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r55;}
#else
{jamaica_ref new_ref=r55;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 r56=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r56;}
#else
{jamaica_ref new_ref=r56;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 if (r56==JAMAICA_NULL) { goto l24; }
 n115=JAMAICA_BLOCK_GET_DATA32(r56,3).i;
 n32=((n115>>4) &  ((jamaica_int32)268435455));
 n33=(n115&15);
l24:
 if (r55==JAMAICA_NULL) { goto l26; }
 n115=JAMAICA_BLOCK_GET_DATA32(r55,3).i;
 n35=((n115>>4) &  ((jamaica_int32)268435455));
 n36=(n115&15);
l26:
 n120=n12;
 r57=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r57;}
#else
{jamaica_ref new_ref=r57;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 if (r57==JAMAICA_NULL) { goto l28; }
 n115=JAMAICA_BLOCK_GET_DATA32(r57,3).i;
 n38=((n115>>4) &  ((jamaica_int32)268435455));
 n39=(n115&15);
l28:
 r58=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r58;}
#else
{jamaica_ref new_ref=r58;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 if (r58==JAMAICA_NULL) { goto l30; }
 n115=JAMAICA_BLOCK_GET_DATA32(r58,3).i;
 n41=((n115>>4) &  ((jamaica_int32)268435455));
 n42=(n115&15);
l30:
 r59=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r59;}
#else
{jamaica_ref new_ref=r59;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 if (r59==JAMAICA_NULL) { goto l32; }
 n115=JAMAICA_BLOCK_GET_DATA32(r59,3).i;
 n44=((n115>>4) &  ((jamaica_int32)268435455));
 n45=(n115&15);
l32:
 r60=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r60;}
#else
{jamaica_ref new_ref=r60;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 if (r60==JAMAICA_NULL) { goto l34; }
 n115=JAMAICA_BLOCK_GET_DATA32(r60,3).i;
 n47=((n115>>4) &  ((jamaica_int32)268435455));
 n48=(n115&15);
l34:
 if (r58==JAMAICA_NULL) { goto l36; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r17=JAMAICA_BLOCK_GET_R(r58,1);
 b0=JAMAICA_BLOCK_GET_DATA32(r17,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r17=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

l36:
 r61=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r61;}
#else
{jamaica_ref new_ref=r61;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 if (r61==JAMAICA_NULL) { goto l38; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(r61,3).i;
 n50=((n115>>4) &  ((jamaica_int32)268435455));
 r19=JAMAICA_BLOCK_GET_R(r61,1);
 b0=JAMAICA_BLOCK_GET_DATA32(r19,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r19=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n51=(n115&15);
l38:
 r62=r21;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r62;}
#else
{jamaica_ref new_ref=r62;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 r22=JAMAICA_BLOCK_GET_R(r62,1);
 r22=JAMAICA_BLOCK_GET_DATA32(r22,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[28]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_AreaOp_0_newRow1,1).i;
 n53=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r22,3).i;
 n55=(n115&15);
 r63=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=r63;}
#else
{jamaica_ref new_ref=r63;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[29]=new_ref;}
#endif

 if (r63==JAMAICA_NULL) { goto l40; }
 n115=JAMAICA_BLOCK_GET_DATA32(r63,3).i;
 n57=((n115>>4) &  ((jamaica_int32)268435455));
 n58=(n115&15);
l40:
 r64=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=r64;}
#else
{jamaica_ref new_ref=r64;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[30]=new_ref;}
#endif

 if (r64==JAMAICA_NULL) { goto l42; }
 n115=JAMAICA_BLOCK_GET_DATA32(r64,3).i;
 n60=((n115>>4) &  ((jamaica_int32)268435455));
 n61=(n115&15);
l42:
 r65=r21;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=r65;}
#else
{jamaica_ref new_ref=r65;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[31]=new_ref;}
#endif

 r24=JAMAICA_BLOCK_GET_R(r65,1);
 r24=JAMAICA_BLOCK_GET_DATA32(r24,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_AreaOp_0_getState3,1).i;
 n63=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r24,3).i;
 n65=(n115&15);
 r66=r21;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r66;}
#else
{jamaica_ref new_ref=r66;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 r26=JAMAICA_BLOCK_GET_R(r66,1);
 r26=JAMAICA_BLOCK_GET_DATA32(r26,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r26;}
#else
{jamaica_ref new_ref=r26;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_AreaOp_0_classify2,1).i;
 n67=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r26,3).i;
 n69=(n115&15);
 r67=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r67;}
#else
{jamaica_ref new_ref=r67;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 if (r67==JAMAICA_NULL) { goto l44; }
 n115=JAMAICA_BLOCK_GET_DATA32(r67,3).i;
 n71=((n115>>4) &  ((jamaica_int32)268435455));
 n72=(n115&15);
l44:
 r68=r21;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r68;}
#else
{jamaica_ref new_ref=r68;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 r28=JAMAICA_BLOCK_GET_R(r68,1);
 r28=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_AreaOp_0_getState3,1).i;
 n74=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r28,3).i;
 n76=(n115&15);
 r69=r21;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r69;}
#else
{jamaica_ref new_ref=r69;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 r30=JAMAICA_BLOCK_GET_R(r69,1);
 r30=JAMAICA_BLOCK_GET_DATA32(r30,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_AreaOp_0_classify2,1).i;
 n78=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r30,3).i;
 n80=(n115&15);
 r70=r46;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=r70;}
#else
{jamaica_ref new_ref=r70;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[40]=new_ref;}
#endif

 if (r70==JAMAICA_NULL) { goto l46; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 r33=JAMAICA_BLOCK_GET_R(r70,1);
 r33=JAMAICA_BLOCK_GET_DATA32(r33,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r33;}
#else
{jamaica_ref new_ref=r33;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n82=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r33,3).i;
 n84=(n115&15);
l46:
 r35=JAMAICA_BLOCK_GET_R(r21,1);
 r35=JAMAICA_BLOCK_GET_DATA32(r35,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=r35;}
#else
{jamaica_ref new_ref=r35;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[41]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_AreaOp_0_getState3,1).i;
 n86=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r35,3).i;
 n88=(n115&15);
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r;
 r71=r46;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=r71;}
#else
{jamaica_ref new_ref=r71;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[42]=new_ref;}
#endif

 if (r71==JAMAICA_NULL) { goto l48; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 r37=JAMAICA_BLOCK_GET_R(r71,1);
 r37=JAMAICA_BLOCK_GET_DATA32(r37,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r37;}
#else
{jamaica_ref new_ref=r37;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n115=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_size7,1).i;
 n90=((n115>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r37,3).i;
 n92=(n115&15);
l48:
 r72=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=r72;}
#else
{jamaica_ref new_ref=r72;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[43]=new_ref;}
#endif

 if (r72==JAMAICA_NULL) { goto l50; }
 n115=JAMAICA_BLOCK_GET_DATA32(r72,3).i;
 n94=((n115>>4) &  ((jamaica_int32)268435455));
 n95=(n115&15);
l50:
 n121=n12;
 b7=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r;
 r73=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=r73;}
#else
{jamaica_ref new_ref=r73;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[44]=new_ref;}
#endif

 if (r73==JAMAICA_NULL) { goto l52; }
 n12=JAMAICA_BLOCK_GET_DATA32(r73,3).i;
 n97=((n12>>4) &  ((jamaica_int32)268435455));
 n98=(n12&15);
l52:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r74=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=r74;}
#else
{jamaica_ref new_ref=r74;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[45]=new_ref;}
#endif

 if (r74==JAMAICA_NULL) { goto l54; }
 n12=JAMAICA_BLOCK_GET_DATA32(r74,3).i;
 n100=((n12>>4) &  ((jamaica_int32)268435455));
 n101=(n12&15);
l54:
 b8=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r;
 r75=r44;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=r75;}
#else
{jamaica_ref new_ref=r75;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[46]=new_ref;}
#endif

 r76=r45;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=r76;}
#else
{jamaica_ref new_ref=r76;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[47]=new_ref;}
#endif

 if (r46==JAMAICA_NULL) { goto l56; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 r43=JAMAICA_BLOCK_GET_R(r46,1);
 r40=JAMAICA_BLOCK_GET_DATA32(r43,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r40;}
#else
{jamaica_ref new_ref=r40;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n12=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_clear32,1).i;
 n103=((n12>>20) &  ((jamaica_int32)4095));
 n12=JAMAICA_BLOCK_GET_DATA32(r40,3).i;
 n105=(n12&15);
l56:
 if (r42==JAMAICA_NULL) { goto l196; }
 n12=JAMAICA_BLOCK_GET_DATA32(r42,3).i;
 n107=((n12>>4) &  ((jamaica_int32)268435455));
 n108=(n12&15);
 if (r47==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n117))) { goto l196; }
 if (r48==JAMAICA_NULL) { goto l196; }
 if (r49==JAMAICA_NULL) { goto l196; }
 if (r50==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n23))) { goto l196; }
 if (r53==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n26))) { goto l196; }
 if (r54==JAMAICA_NULL) { goto l196; }
 if (r56==JAMAICA_NULL) { goto l196; }
 if (r55==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n35))) { goto l196; }
 if (r57==JAMAICA_NULL) { goto l196; }
 if (r58==JAMAICA_NULL) { goto l196; }
 if (r59==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n44))) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n44))) { goto l196; }
 if (r60==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n47))) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n47))) { goto l196; }
 if (r61==JAMAICA_NULL) { goto l196; }
 if (r63==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n57))) { goto l196; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n57))) { goto l196; }
 if (r64==JAMAICA_NULL) { goto l196; }
 if (r67==JAMAICA_NULL) { goto l196; }
 if (r70==JAMAICA_NULL) { goto l196; }
 if (r71==JAMAICA_NULL) { goto l196; }
 if (r72==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n94))) { goto l196; }
 if (r73==JAMAICA_NULL) { goto l196; }
 if (r74==JAMAICA_NULL) { goto l196; }
 if (r46==JAMAICA_NULL) { goto l196; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n107))) { goto l196; }
 if (n15!=0) { goto l196; }
 if (n18!=0) { goto l196; }
 if (n21!=0) { goto l196; }
 if (n24!=0) { goto l196; }
 if (n27!=0) { goto l196; }
 if (n30!=0) { goto l196; }
 if (n33!=0) { goto l196; }
 if (n36!=0) { goto l196; }
 if (n39!=0) { goto l196; }
 if (n42!=0) { goto l196; }
 if (n45!=0) { goto l196; }
 if (n48!=0) { goto l196; }
 if (n51!=0) { goto l196; }
 if (n55!=0) { goto l196; }
 if (n58!=0) { goto l196; }
 if (n61!=0) { goto l196; }
 if (n65!=0) { goto l196; }
 if (n69!=0) { goto l196; }
 if (n72!=0) { goto l196; }
 if (n76!=0) { goto l196; }
 if (n80!=0) { goto l196; }
 if (n84!=0) { goto l196; }
 if (n88!=0) { goto l196; }
 if (n92!=0) { goto l196; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l117; }
 jamaicaScheduler_syncPointFull(ct);
l117:
 if (n95!=0) { goto l196; }
 if (n98!=0) { goto l196; }
 if (n101!=0) { goto l196; }
 if (n105!=0) { goto l196; }
 if (n108!=0) { goto l196; }
l122:
 if (n113>=n116) { goto l312; }
 JAMAICA_GET_ARRAY_DOUBLE_D0(r47,0,d3);
 n12=JAMAICA_SUBS32(n114,1);
 n115=n12;
 d4=d3;
l124:
 if (n12<n113) { goto l131; }
 n122=n12;
 if (((jamaica_uint32)(n122))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r48,n122,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n123=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYBot21,1).i>>20) &  ((jamaica_int32)4095));
 n124=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n123,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 d5=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d5)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||(d5<d4))?-1:((d5==d4)?0:+1))<=0) { goto l129; }
 n123=n115;
 if (n123<=n122) { goto l128; }
 if (((jamaica_uint32)(n123))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 if ((r43!=JAMAICA_NULL)&&(r13!=jam_class_java_lang_Object_92)&&((r13==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r43,1),r13)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r48,n123,r43);
l128:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n115=JAMAICA_ADDS32(n115,(-1));
l129:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n12=JAMAICA_ADDS32(n12,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l124; }
 jamaicaScheduler_syncPointFull(ct);
 goto l124;
l131:
 n12=JAMAICA_ADDS32(n115,1);
 n113=n12;
 n115=n114;
 if (n12<n115) { goto l136; }
 if (n115>=n118) { goto l312; }
 if (((jamaica_uint32)(n115))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r49,n115,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d4=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 d3=d4;
 JAMAICA_GET_ARRAY_DOUBLE_D0(r50,0,d5);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d5)||(d4<d5))?-1:((d4==d5)?0:+1))<=0) { goto l135; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_finalurves7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r51,r52);
}
l135:
 JAMAICA_SET_ARRAY_DOUBLE_D0(r53,0,d3);
l136:
 n12=n114;
 if (n12>=n119) { goto l140; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n29))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r54,n12,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n115=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n115,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d4=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||(d4<d3))?-1:((d4==d3)?0:+1))>0) { goto l140; }
 n114=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l136; }
 jamaicaScheduler_syncPointFull(ct);
 goto l136;
l140:
 if (((jamaica_uint32)(n113))>=((jamaica_uint32)(n32))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r56,n113,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYBot21,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d3=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 JAMAICA_SET_ARRAY_DOUBLE_D0(r55,1,d3);
 n12=n114;
 if (n12>=n120) { goto l143; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n32))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r56,n12,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_R(r43,1);
 r77=JAMAICA_BLOCK_GET_DATA32(r77,3).r;
 n12=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i;
 n12=((n12>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r77,3).i;
 n115=(n115&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d3=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 JAMAICA_GET_ARRAY_DOUBLE_D0(r55,1,d4);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||(d4<d3))?-1:((d4==d3)?0:+1))<=0) { goto l143; }
 JAMAICA_SET_ARRAY_DOUBLE_D0(r55,1,d3);
l143:
 n122=1;
 n12=n113;
 n123=n114;
 n124=n113;
l144:
 if (n12>=n123) { goto l158; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n38))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r57,n12,r77);
 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,0);
}
 n115=n12;
 r77=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r78=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

l146:
 n125=n115;
 if (n125<=n124) { goto l156; }
 n126=JAMAICA_SUBS32(n125,1);
 if (((jamaica_uint32)(n126))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r58,n126,r79);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 r80=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[51]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_compareTo6;
ct->calledMethod=m;
 n126=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r79,r59);
}
 n127=n126;
 JAMAICA_GET_ARRAY_DOUBLE_D0(r59,1,d3);
 JAMAICA_GET_ARRAY_DOUBLE_D0(r59,0,d4);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||(d3>d4))?+1:((d3==d4)?0:-1))>0) { goto l149; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=JAMAICA_NULL;}
#else
{l[47]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=JAMAICA_NULL;}
#else
{l[46]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=JAMAICA_NULL;}
#else
{l[45]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=JAMAICA_NULL;}
#else
{l[44]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=JAMAICA_NULL;}
#else
{l[43]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=JAMAICA_NULL;}
#else
{l[42]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=JAMAICA_NULL;}
#else
{l[41]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=JAMAICA_NULL;}
#else
{l[40]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=JAMAICA_NULL;}
#else
{l[37]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=JAMAICA_NULL;}
#else
{l[36]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=JAMAICA_NULL;}
#else
{l[35]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=JAMAICA_NULL;}
#else
{l[34]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=JAMAICA_NULL;}
#else
{l[33]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=JAMAICA_NULL;}
#else
{l[32]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=JAMAICA_NULL;}
#else
{l[31]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=JAMAICA_NULL;}
#else
{l[30]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=JAMAICA_NULL;}
#else
{l[29]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=JAMAICA_NULL;}
#else
{l[28]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_029);
 JAMAICA_GET_ARRAY_DOUBLE_D0(r60,1,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_032);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE_D0(r60,0,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l149:
 if (n126<0) { goto l154; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (n127!=0) { goto l156; }
 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n125=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 n126=n125;
 if (n125!=0) { goto l153; }
 n125=n122;
 n122=JAMAICA_ADDS32(n125,1);
 n126=n125;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r80,n125);
}
l153:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r78,n126);
}
 goto l156;
l154:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n125))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 if ((r79!=JAMAICA_NULL)&&(r17!=jam_class_java_lang_Object_92)&&((r17==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r79,1),r17)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r58,n125,r79);
 n115=JAMAICA_ADDS32(n125,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l146; }
 jamaicaScheduler_syncPointFull(ct);
 goto l146;
l156:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n115))>=((jamaica_uint32)(n50))) { goto LABEL_tAIOOBE; }
 if ((r43!=JAMAICA_NULL)&&(r19!=jam_class_java_lang_Object_92)&&((r19==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r43,1),r19)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r61,n115,r43);
 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l144; }
 jamaicaScheduler_syncPointFull(ct);
 goto l144;
l158:
 JAMAICA_GET_REF_ARRAY_D0(r22,n53,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r62);
}
 JAMAICA_GET_ARRAY_DOUBLE_D0(r63,0,d3);
 JAMAICA_GET_ARRAY_DOUBLE_D0(r63,1,d4);
 n12=n113;
 n115=n114;
 d5=d4;
 d6=d3;
 n122=n114;
 d7=d4;
l159:
 if (n12>=n115) { goto l184; }
 n123=n12;
 if (((jamaica_uint32)(n123))>=((jamaica_uint32)(n60))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r64,n123,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 n124=n123;
 if (n123==0) { goto l179; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r24,n63,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r65);
}
 n125=n123;
 if (n123!=1) { goto l163; }
 n123=(-1);
 goto l164;
l163:
 n123=1;
l164:
 r77=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r78=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

 d8=d5;
 n126=n123;
l165:
 r79=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r26,n67,r80);
{ jamaica_ref m=r80;
ct->calledMethod=m;
 n127=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r66,r79);
}
 if (r77!=JAMAICA_NULL) { goto l168; }
 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_isActveFor8;
ct->calledMethod=m;
 n127=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r79,d6,n126);
}
 if (n127==0) { goto l168; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 r77=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

l168:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 r79=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r80=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79);
}
 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
 r81=JAMAICA_BLOCK_GET_R(r80,1);
 r81=JAMAICA_BLOCK_GET_DATA32(r81,3).r;
 n127=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYBot21,1).i;
 n127=((n127>>20) &  ((jamaica_int32)4095));
 n128=JAMAICA_BLOCK_GET_DATA32(r81,3).i;
 n128=(n128&15);
 JAMAICA_GET_REF_ARRAY(r81,n127,r81);
{ jamaica_ref m=r81;
ct->calledMethod=m;
 d9=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d9)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d8)||(d9<d8))?-1:((d9==d8)?0:+1))<=0) { goto l170; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 r78=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

 d8=d9;
l170:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 n127=JAMAICA_ADDS32(n12,1);
 n12=n127;
 if (n127>=n122) { goto l174; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n127))>=((jamaica_uint32)(n71))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r67,n127,r79);
 r43=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n127=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l173; }
 jamaicaScheduler_syncPointFull(ct);
l173:
 if (n127==n124) { goto l165; }
l174:
 n12=JAMAICA_ADDS32(n12,(-1));
 JAMAICA_GET_REF_ARRAY_D0(r28,n74,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 n124=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r68);
}
 if (n124!=n125) { goto l176; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 n123=0;
 goto l180;
l176:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r77==JAMAICA_NULL) { goto l178; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l180;
l178:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 r43=r78;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l180;
l179:
 JAMAICA_GET_REF_ARRAY_D0(r30,n78,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r69,r77);
}
l180:
 if (n123==0) { goto l182; }
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_record7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d7,n123);
}
 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_awt_geom_CurveLink_11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_double,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r43,d3,d7,n123);
}
 JAMAICA_GET_REF_ARRAY_D0(r33,n82,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r43;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r70,r77);
}
l182:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l159; }
 jamaicaScheduler_syncPointFull(ct);
 goto l159;
l184:
 JAMAICA_GET_REF_ARRAY_D0(r35,n86,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 n12=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r21);
}
 if (n12==(-1)) { goto l194; }
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,jam_str_sun_awt_geom_AreaOp_044);
}
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_046);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_append13(ct,r77,JAMAICA_SUBS32(n115,n113));
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_048);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r37,n90,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n12=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r71);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append13(ct,r77,n12);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_049);
 JAMAICA_GET_ARRAY_DOUBLE_D0(r72,0,d3);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,d3);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 if (n115>=n121) { goto l187; }
 r43=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_050);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (((jamaica_uint32)(n114))>=((jamaica_uint32)(n97))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r73,n114,r78);
 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r78=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r78);
}
 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
 r79=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r78,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r79,3).i&15);
 JAMAICA_GET_REF_ARRAY(r79,n12,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 d3=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r78);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,d3);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 goto l188;
l187:
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,jam_str_sun_awt_geom_AreaOp_051);
}
l188:
 n12=n113;
 n115=n114;
l189:
 n122=n12;
 if (n122>=n115) { goto l194; }
 if (((jamaica_uint32)(n122))>=((jamaica_uint32)(n100))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r74,n122,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=JAMAICA_BLOCK_GET_DATA32(b8,4).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n122=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println20,1).i>>20) &  ((jamaica_int32)4095));
 n123=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n122,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n122=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (n122==0) { goto l192; }
 r43=JAMAICA_BLOCK_GET_DATA32(b8,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_053);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_append13(ct,r77,n122);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_054);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n122=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n123=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n122,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
l192:
 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l189; }
 jamaicaScheduler_syncPointFull(ct);
 goto l189;
l194:
 jam_comp_sun_awt_geom_AreaOp_0_resolLinks8(ct,r75,r76,r46);
 JAMAICA_GET_REF_ARRAY_D0(r40,n103,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r46);
}
 JAMAICA_SET_ARRAY_DOUBLE_D0(r42,0,d4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l122; }
 jamaicaScheduler_syncPointFull(ct);
 goto l122;
l196:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l198; }
 jamaicaScheduler_syncPointFull(ct);
l198:
 if (n113>=n116) { goto l312; }
 if (r47==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n117))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r47,0,d3);
 n12=JAMAICA_SUBS32(n114,1);
 n115=n12;
 d4=d3;
l200:
 if (n12<n113) { goto l207; }
 n122=n12;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n122))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r48,n122,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n123=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYBot21,1).i>>20) &  ((jamaica_int32)4095));
 n124=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n123,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 d5=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d5)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||(d5<d4))?-1:((d5==d4)?0:+1))<=0) { goto l205; }
 n123=n115;
 if (n123<=n122) { goto l204; }
 if (((jamaica_uint32)(n123))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 if ((r43!=JAMAICA_NULL)&&(r13!=jam_class_java_lang_Object_92)&&((r13==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r43,1),r13)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY(ct,r48,n123,r43);
l204:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n115=JAMAICA_ADDS32(n115,(-1));
l205:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n12=JAMAICA_ADDS32(n12,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l200; }
 jamaicaScheduler_syncPointFull(ct);
 goto l200;
l207:
 n12=JAMAICA_ADDS32(n115,1);
 n113=n12;
 n115=n114;
 if (n12<n115) { goto l212; }
 if (n115>=n118) { goto l312; }
 if (r49==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n115))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r49,n115,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d4=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 d3=d4;
 if (r50==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r50,0,d5);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d5)||(d4<d5))?-1:((d4==d5)?0:+1))<=0) { goto l211; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_finalurves7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r51,r52);
}
l211:
 if (r53==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n26))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r53,0,d3);
l212:
 n12=n114;
 if (n12>=n119) { goto l216; }
 if (r54==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n29))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r54,n12,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n115=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n115,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d4=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||(d4<d3))?-1:((d4==d3)?0:+1))>0) { goto l216; }
 n114=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l212; }
 jamaicaScheduler_syncPointFull(ct);
 goto l212;
l216:
 if (r56==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n113))>=((jamaica_uint32)(n32))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r56,n113,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYBot21,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d3=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r55==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n35))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r55,1,d3);
 n12=n114;
 if (n12>=n120) { goto l219; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n32))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r56,n12,r43);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_R(r43,1);
 r77=JAMAICA_BLOCK_GET_DATA32(r77,3).r;
 n12=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i;
 n12=((n12>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r77,3).i;
 n115=(n115&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 d3=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 JAMAICA_GET_ARRAY_DOUBLE(r55,1,d4);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||(d4<d3))?-1:((d4==d3)?0:+1))<=0) { goto l219; }
 JAMAICA_SET_ARRAY_DOUBLE(r55,1,d3);
l219:
 n122=1;
 n12=n113;
 n123=n114;
 n124=n113;
 if (r57==JAMAICA_NULL) { goto l242; }
 if (r58==JAMAICA_NULL) { goto l242; }
 if (r59==JAMAICA_NULL) { goto l242; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n44))) { goto l242; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n44))) { goto l242; }
 if (r60==JAMAICA_NULL) { goto l242; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n47))) { goto l242; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n47))) { goto l242; }
 if (r61==JAMAICA_NULL) { goto l242; }
l228:
 if (n12>=n123) { goto l274; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n38))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r57,n12,r77);
 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,0);
}
 n115=n12;
 r77=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r78=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

l230:
 n125=n115;
 if (n125<=n124) { goto l240; }
 n126=JAMAICA_SUBS32(n125,1);
 if (((jamaica_uint32)(n126))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r58,n126,r79);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 r80=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[51]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_compareTo6;
ct->calledMethod=m;
 n126=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r79,r59);
}
 n127=n126;
 JAMAICA_GET_ARRAY_DOUBLE(r59,1,d3);
 JAMAICA_GET_ARRAY_DOUBLE(r59,0,d4);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||(d3>d4))?+1:((d3==d4)?0:-1))>0) { goto l233; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=JAMAICA_NULL;}
#else
{l[47]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=JAMAICA_NULL;}
#else
{l[46]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=JAMAICA_NULL;}
#else
{l[45]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=JAMAICA_NULL;}
#else
{l[44]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=JAMAICA_NULL;}
#else
{l[43]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=JAMAICA_NULL;}
#else
{l[42]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=JAMAICA_NULL;}
#else
{l[41]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=JAMAICA_NULL;}
#else
{l[40]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=JAMAICA_NULL;}
#else
{l[37]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=JAMAICA_NULL;}
#else
{l[36]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=JAMAICA_NULL;}
#else
{l[35]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=JAMAICA_NULL;}
#else
{l[34]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=JAMAICA_NULL;}
#else
{l[33]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=JAMAICA_NULL;}
#else
{l[32]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=JAMAICA_NULL;}
#else
{l[31]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=JAMAICA_NULL;}
#else
{l[30]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=JAMAICA_NULL;}
#else
{l[29]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=JAMAICA_NULL;}
#else
{l[28]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_029);
 JAMAICA_GET_ARRAY_DOUBLE(r60,1,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_032);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE(r60,0,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l233:
 if (n126<0) { goto l238; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (n127!=0) { goto l240; }
 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n125=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 n126=n125;
 if (n125!=0) { goto l237; }
 n125=n122;
 n122=JAMAICA_ADDS32(n125,1);
 n126=n125;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r80,n125);
}
l237:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r78,n126);
}
 goto l240;
l238:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n125))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 if ((r79!=JAMAICA_NULL)&&(r17!=jam_class_java_lang_Object_92)&&((r17==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r79,1),r17)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY(ct,r58,n125,r79);
 n115=JAMAICA_ADDS32(n125,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l230; }
 jamaicaScheduler_syncPointFull(ct);
 goto l230;
l240:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n115))>=((jamaica_uint32)(n50))) { goto LABEL_tAIOOBE; }
 if ((r43!=JAMAICA_NULL)&&(r19!=jam_class_java_lang_Object_92)&&((r19==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r43,1),r19)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY(ct,r61,n115,r43);
 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l228; }
 jamaicaScheduler_syncPointFull(ct);
 goto l228;
l242:
 if (n12>=n123) { goto l274; }
 if (r57==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n38))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r57,n12,r77);
 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,0);
}
 n115=n12;
 r77=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r78=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

 if (r58==JAMAICA_NULL) { goto l262; }
 if (r77==JAMAICA_NULL) { goto l262; }
 if (r59==JAMAICA_NULL) { goto l262; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n44))) { goto l262; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n44))) { goto l262; }
 if (r60==JAMAICA_NULL) { goto l262; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n47))) { goto l262; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n47))) { goto l262; }
 if (r78==JAMAICA_NULL) { goto l262; }
l252:
 n125=n115;
 if (n125<=n124) { goto l272; }
 n126=JAMAICA_SUBS32(n125,1);
 if (((jamaica_uint32)(n126))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r58,n126,r79);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 r80=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[51]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_compareTo6;
ct->calledMethod=m;
 n126=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r79,r59);
}
 n127=n126;
 JAMAICA_GET_ARRAY_DOUBLE(r59,1,d3);
 JAMAICA_GET_ARRAY_DOUBLE(r59,0,d4);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||(d3>d4))?+1:((d3==d4)?0:-1))>0) { goto l255; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=JAMAICA_NULL;}
#else
{l[47]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=JAMAICA_NULL;}
#else
{l[46]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=JAMAICA_NULL;}
#else
{l[45]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=JAMAICA_NULL;}
#else
{l[44]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=JAMAICA_NULL;}
#else
{l[43]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=JAMAICA_NULL;}
#else
{l[42]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=JAMAICA_NULL;}
#else
{l[41]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=JAMAICA_NULL;}
#else
{l[40]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=JAMAICA_NULL;}
#else
{l[37]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=JAMAICA_NULL;}
#else
{l[36]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=JAMAICA_NULL;}
#else
{l[35]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=JAMAICA_NULL;}
#else
{l[34]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=JAMAICA_NULL;}
#else
{l[33]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=JAMAICA_NULL;}
#else
{l[32]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=JAMAICA_NULL;}
#else
{l[31]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=JAMAICA_NULL;}
#else
{l[30]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=JAMAICA_NULL;}
#else
{l[29]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=JAMAICA_NULL;}
#else
{l[28]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_029);
 JAMAICA_GET_ARRAY_DOUBLE(r60,1,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_032);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE(r60,0,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l255:
 if (n126<0) { goto l260; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (n127!=0) { goto l272; }
 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n125=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 n126=n125;
 if (n125!=0) { goto l259; }
 n125=n122;
 n122=JAMAICA_ADDS32(n125,1);
 n126=n125;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r80,n125);
}
l259:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r78,n126);
}
 goto l272;
l260:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n125))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 if ((r79!=JAMAICA_NULL)&&(r17!=jam_class_java_lang_Object_92)&&((r17==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r79,1),r17)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY(ct,r58,n125,r79);
 n115=JAMAICA_ADDS32(n125,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l252; }
 jamaicaScheduler_syncPointFull(ct);
 goto l252;
l262:
 n125=n115;
 if (n125<=n124) { goto l272; }
 n126=JAMAICA_SUBS32(n125,1);
 if (r58==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n126))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r58,n126,r79);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 r80=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[51]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_compareTo6;
ct->calledMethod=m;
 n126=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r79,r59);
}
 n127=n126;
 if (r59==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n44))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r59,1,d3);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n44))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r59,0,d4);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d4)||(d3>d4))?+1:((d3==d4)?0:-1))>0) { goto l265; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=JAMAICA_NULL;}
#else
{l[47]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=JAMAICA_NULL;}
#else
{l[46]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=JAMAICA_NULL;}
#else
{l[45]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=JAMAICA_NULL;}
#else
{l[44]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=JAMAICA_NULL;}
#else
{l[43]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=JAMAICA_NULL;}
#else
{l[42]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=JAMAICA_NULL;}
#else
{l[41]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=JAMAICA_NULL;}
#else
{l[40]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=JAMAICA_NULL;}
#else
{l[37]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=JAMAICA_NULL;}
#else
{l[36]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=JAMAICA_NULL;}
#else
{l[35]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=JAMAICA_NULL;}
#else
{l[34]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=JAMAICA_NULL;}
#else
{l[33]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=JAMAICA_NULL;}
#else
{l[32]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=JAMAICA_NULL;}
#else
{l[31]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=JAMAICA_NULL;}
#else
{l[30]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=JAMAICA_NULL;}
#else
{l[29]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=JAMAICA_NULL;}
#else
{l[28]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_029);
 if (r60==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n47))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r60,1,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_sun_awt_geom_AreaOp_032);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n47))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE(r60,0,d3);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d3);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l265:
 if (n126<0) { goto l270; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (n127!=0) { goto l272; }
 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n125=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 n126=n125;
 if (n125!=0) { goto l269; }
 n125=n122;
 n122=JAMAICA_ADDS32(n125,1);
 n126=n125;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r80,n125);
}
l269:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_setEqlence5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r78,n126);
}
 goto l272;
l270:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n125))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 if ((r79!=JAMAICA_NULL)&&(r17!=jam_class_java_lang_Object_92)&&((r17==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r79,1),r17)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY(ct,r58,n125,r79);
 n115=JAMAICA_ADDS32(n125,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l262; }
 jamaicaScheduler_syncPointFull(ct);
 goto l262;
l272:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=JAMAICA_NULL;}
#else
{l[51]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 if (r61==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n115))>=((jamaica_uint32)(n50))) { goto LABEL_tAIOOBE; }
 if ((r43!=JAMAICA_NULL)&&(r19!=jam_class_java_lang_Object_92)&&((r19==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r43,1),r19)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY(ct,r61,n115,r43);
 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l242; }
 jamaicaScheduler_syncPointFull(ct);
 goto l242;
l274:
 JAMAICA_GET_REF_ARRAY(r22,n53,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r62);
}
 if (r63==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n57))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r63,0,d3);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n57))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r63,1,d4);
 n12=n113;
 n115=n114;
 d5=d4;
 d6=d3;
 n122=n114;
 d7=d4;
l275:
 if (n12>=n115) { goto l300; }
 n123=n12;
 if (r64==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n123))>=((jamaica_uint32)(n60))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r64,n123,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 n124=n123;
 if (n123==0) { goto l295; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r24,n63,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r65);
}
 n125=n123;
 if (n123!=1) { goto l279; }
 n123=(-1);
 goto l280;
l279:
 n123=1;
l280:
 r77=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r78=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

 d8=d5;
 n126=n123;
l281:
 r79=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY(r26,n67,r80);
{ jamaica_ref m=r80;
ct->calledMethod=m;
 n127=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r66,r79);
}
 if (r77!=JAMAICA_NULL) { goto l284; }
 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_isActveFor8;
ct->calledMethod=m;
 n127=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r79,d6,n126);
}
 if (n127==0) { goto l284; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 r77=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

l284:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 r79=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r79;}
#else
{jamaica_ref new_ref=r79;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r80=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79);
}
 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
 r81=JAMAICA_BLOCK_GET_R(r80,1);
 r81=JAMAICA_BLOCK_GET_DATA32(r81,3).r;
 n127=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYBot21,1).i;
 n127=((n127>>20) &  ((jamaica_int32)4095));
 n128=JAMAICA_BLOCK_GET_DATA32(r81,3).i;
 n128=(n128&15);
 JAMAICA_GET_REF_ARRAY(r81,n127,r81);
{ jamaica_ref m=r81;
ct->calledMethod=m;
 d9=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d9)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d8)||(d9<d8))?-1:((d9==d8)?0:+1))<=0) { goto l286; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 r78=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

 d8=d9;
l286:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=JAMAICA_NULL;}
#else
{l[50]=JAMAICA_NULL;}
#endif

 n127=JAMAICA_ADDS32(n12,1);
 n12=n127;
 if (n127>=n122) { goto l290; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r67==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n127))>=((jamaica_uint32)(n71))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r67,n127,r79);
 r43=r79;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n127=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l289; }
 jamaicaScheduler_syncPointFull(ct);
l289:
 if (n127==n124) { goto l281; }
l290:
 n12=JAMAICA_ADDS32(n12,(-1));
 JAMAICA_GET_REF_ARRAY(r28,n74,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 n124=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r68);
}
 if (n124!=n125) { goto l292; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 n123=0;
 goto l296;
l292:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r77==JAMAICA_NULL) { goto l294; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r43=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l296;
l294:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=JAMAICA_NULL;}
#else
{l[49]=JAMAICA_NULL;}
#endif

 r43=r78;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l296;
l295:
 JAMAICA_GET_REF_ARRAY(r30,n78,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r69,r77);
}
l296:
 if (n123==0) { goto l298; }
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_record7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,d7,n123);
}
 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_awt_geom_CurveLink_11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r43=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_double,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r43,d3,d7,n123);
}
 if (r70==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r33,n82,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r43;
ct->calledMethod=m;
 n123=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r70,r77);
}
l298:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l275; }
 jamaicaScheduler_syncPointFull(ct);
 goto l275;
l300:
 JAMAICA_GET_REF_ARRAY(r35,n86,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 n12=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r21);
}
 if (n12==(-1)) { goto l310; }
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,jam_str_sun_awt_geom_AreaOp_044);
}
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_046);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_append13(ct,r77,JAMAICA_SUBS32(n115,n113));
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_048);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r71==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r37,n90,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n12=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r71);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append13(ct,r77,n12);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_049);
 if (r72==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n94))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r72,0,d3);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,d3);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n122=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 if (n115>=n121) { goto l303; }
 r43=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_050);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r73==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n114))>=((jamaica_uint32)(n97))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r73,n114,r78);
 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getCurve2;
ct->calledMethod=m;
 r78=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r78);
}
 if (r78==JAMAICA_NULL) { goto LABEL_tNPE; }
 r79=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r78,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_awt_geom_Curve_10_getYTop19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r79,3).i&15);
 JAMAICA_GET_REF_ARRAY(r79,n12,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 d3=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r78);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,d3);
}
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n12,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
 goto l304;
l303:
 r43=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n115=(JAMAICA_BLOCK_GET_DATA32(r77,3).i&15);
 JAMAICA_GET_REF_ARRAY(r77,n12,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,jam_str_sun_awt_geom_AreaOp_051);
}
l304:
 n12=n113;
 n115=n114;
l305:
 n122=n12;
 if (n122>=n115) { goto l310; }
 if (r74==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n122))>=((jamaica_uint32)(n100))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r74,n122,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=JAMAICA_BLOCK_GET_DATA32(b8,4).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n122=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println20,1).i>>20) &  ((jamaica_int32)4095));
 n123=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n122,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r43);
}
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Edge_12_getEqlence4;
ct->calledMethod=m;
 n122=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43);
}
 if (n122==0) { goto l308; }
 r43=JAMAICA_BLOCK_GET_DATA32(b8,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r77=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 if (r77==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=JAMAICA_NULL;}
#else
{l[48]=JAMAICA_NULL;}
#endif

 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_053);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_append13(ct,r77,n122);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_append4(ct,r77,jam_str_sun_awt_geom_AreaOp_054);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r77=jam_comp_java_lang_Strinilder_140_toString20(ct,r77);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r43,1),3).r;
 n122=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n123=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n122,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r43,r77);
}
l308:
 n12=JAMAICA_ADDS32(n12,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l305; }
 jamaicaScheduler_syncPointFull(ct);
 goto l305;
l310:
 jam_comp_sun_awt_geom_AreaOp_0_resolLinks8(ct,r75,r76,r46);
 if (r46==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r40,n103,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r46);
}
 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n107))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r42,0,d4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l196; }
 jamaicaScheduler_syncPointFull(ct);
 goto l196;
l312:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=JAMAICA_NULL;}
#else
{l[47]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=JAMAICA_NULL;}
#else
{l[46]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=JAMAICA_NULL;}
#else
{l[45]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=JAMAICA_NULL;}
#else
{l[44]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=JAMAICA_NULL;}
#else
{l[43]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=JAMAICA_NULL;}
#else
{l[42]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=JAMAICA_NULL;}
#else
{l[41]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=JAMAICA_NULL;}
#else
{l[40]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=JAMAICA_NULL;}
#else
{l[37]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=JAMAICA_NULL;}
#else
{l[36]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=JAMAICA_NULL;}
#else
{l[35]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=JAMAICA_NULL;}
#else
{l[34]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=JAMAICA_NULL;}
#else
{l[33]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=JAMAICA_NULL;}
#else
{l[32]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=JAMAICA_NULL;}
#else
{l[31]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=JAMAICA_NULL;}
#else
{l[30]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=JAMAICA_NULL;}
#else
{l[29]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=JAMAICA_NULL;}
#else
{l[28]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r42=r44;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_finalurves7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r45);
}
 if (ct->plainAlloc) {
  r43 = jamaicaGC_PlainAllocHeadBlock(ct,18);
  if (r43 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r43,1)=jam_class_java_util_Vector_210;
  }
 } else {
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_util_Vector_210);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 n113=10;
 n114=n113;
 n12=0;
 JAMAICA_BLOCK_GET_DATA32(r43,3).i = 0;
 if (n113>=0) { goto l314; }
 
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

 r42=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Illegption_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tOOME; }
 r43=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r43==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r43=jam_comp_java_lang_Strinilder_140_append4(ct,r43,jam_str_java_util_Vector_2105);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_append13(ct,r43,n114);
 if (r43==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=jam_comp_java_lang_Strinilder_140_toString20(ct,r43);
{ jamaica_ref m=jam_mtd_java_lang_Illegption_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r42);
l314:
 if ((n113<0)) { goto LABEL_tNASE; }
 r44=jamaicaInterpreter_allocSimpleArray(ct,n113,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r43,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r43,4).r=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r43,4).r=new_ref;}
#endif

 JAMAICA_BLOCK_GET_DATA32(r43,6).i = n12;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 r44=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r42,1),3).r;
 n113=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_elements9,1).i>>20) &  ((jamaica_int32)4095));
 n114=(JAMAICA_BLOCK_GET_DATA32(r44,3).i&15);
 JAMAICA_GET_REF_ARRAY(r44,n113,r44);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r44;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 r44=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r45=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r46=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r47=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n113=0;
 n114=0;
 r13=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n12=0;
 n115=0;
 r17=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n116=0;
 n117=0;
 if (r44==JAMAICA_NULL) { goto l316; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r45=jamaicaInterpreter_getInterfaceMethod(ct,r44,jam_mtd_java_util_Enumeation_74_hasMoments0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

l316:
 r19=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 if (r19==JAMAICA_NULL) { goto l318; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 r46=jamaicaInterpreter_getInterfaceMethod(ct,r19,jam_mtd_java_util_Enumeation_74_nextEement1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

l318:
 r22=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 if (r22==JAMAICA_NULL) { goto l320; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r42=JAMAICA_BLOCK_GET_R(r22,1);
 r47=JAMAICA_BLOCK_GET_DATA32(r42,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n113=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n113=((n113>>20) &  ((jamaica_int32)4095));
 n114=JAMAICA_BLOCK_GET_DATA32(r47,3).i;
 n114=(n114&15);
l320:
 r24=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 if (r24==JAMAICA_NULL) { goto l322; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r42=JAMAICA_BLOCK_GET_R(r24,1);
 r13=JAMAICA_BLOCK_GET_DATA32(r42,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n12=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n12=((n12>>20) &  ((jamaica_int32)4095));
 n115=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n115=(n115&15);
l322:
 r26=r43;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r26;}
#else
{jamaica_ref new_ref=r26;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 if (r26==JAMAICA_NULL) { goto l345; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r42=JAMAICA_BLOCK_GET_R(r26,1);
 r17=JAMAICA_BLOCK_GET_DATA32(r42,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n116=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n116=((n116>>20) &  ((jamaica_int32)4095));
 n117=JAMAICA_BLOCK_GET_DATA32(r17,3).i;
 n117=(n117&15);
 if (r44==JAMAICA_NULL) { goto l345; }
 if (r19==JAMAICA_NULL) { goto l345; }
 if (r22==JAMAICA_NULL) { goto l345; }
 if (r24==JAMAICA_NULL) { goto l345; }
 if (n114!=0) { goto l345; }
 if (n115!=0) { goto l345; }
 if (n117!=0) { goto l345; }
l330:
{ jamaica_ref m=r45;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r44);
}
 if (n15==0) { goto l360; }
{ jamaica_ref m=r46;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r19);
}
 if ((r42!=JAMAICA_NULL) && (((r42!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r42,1) == jam_class_sun_awt_geom_CurveLink_11)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r42,1),4) == JAMAICA_NULL)?FALSE:(jam_class_sun_awt_geom_CurveLink_11 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r42,1),4),2))))==0)) { goto LABEL_tCCE; }
 r80=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 r42=r80;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getMoveto4;
ct->calledMethod=m;
 r28=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 JAMAICA_GET_REF_ARRAY_D0(r47,n113,r30);
{ jamaica_ref m=r30;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,r28);
}
l332:
 r28=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 if (r28==JAMAICA_NULL) { goto l337; }
l333:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getNext11;
ct->calledMethod=m;
 r30=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 r80=r30;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 if (r30==JAMAICA_NULL) { goto l343; }
 r30=r80;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_absorb1;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28,r80);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l336; }
 jamaicaScheduler_syncPointFull(ct);
l336:
 if (n15!=0) { goto l333; } else { goto l341; }
l337:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getNext11;
ct->calledMethod=m;
 r30=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 r80=r30;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 if (r30==JAMAICA_NULL) { goto l343; }
 r30=r80;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 if (r28==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_absorb1;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28,r80);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l340; }
 jamaicaScheduler_syncPointFull(ct);
l340:
 if (n15!=0) { goto l337; }
l341:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getSuCurve3;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28);
}
 JAMAICA_GET_REF_ARRAY_D0(r13,n12,r28);
{ jamaica_ref m=r28;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r24,r42);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 r42=r30;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l332; }
 jamaicaScheduler_syncPointFull(ct);
 goto l332;
l343:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getSuCurve3;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 JAMAICA_GET_REF_ARRAY_D0(r17,n116,r28);
{ jamaica_ref m=r28;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,r42);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l330; }
 jamaicaScheduler_syncPointFull(ct);
 goto l330;
l345:
 if (r44==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=r45;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r44);
}
 if (n15==0) { goto l360; }
 if (r19==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=r46;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r19);
}
 if ((r42!=JAMAICA_NULL) && (((r42!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r42,1) == jam_class_sun_awt_geom_CurveLink_11)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r42,1),4) == JAMAICA_NULL)?FALSE:(jam_class_sun_awt_geom_CurveLink_11 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r42,1),4),2))))==0)) { goto LABEL_tCCE; }
 r80=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 r42=r80;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getMoveto4;
ct->calledMethod=m;
 r28=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 if (r22==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r47,n113,r30);
{ jamaica_ref m=r30;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,r28);
}
l347:
 r28=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 if (r28==JAMAICA_NULL) { goto l352; }
l348:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getNext11;
ct->calledMethod=m;
 r30=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 r80=r30;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 if (r30==JAMAICA_NULL) { goto l358; }
 r30=r80;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_absorb1;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28,r80);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l351; }
 jamaicaScheduler_syncPointFull(ct);
l351:
 if (n15!=0) { goto l348; } else { goto l356; }
l352:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 if (r80==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getNext11;
ct->calledMethod=m;
 r30=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r80);
}
 r80=r30;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r80;}
#else
{jamaica_ref new_ref=r80;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 if (r30==JAMAICA_NULL) { goto l358; }
 r30=r80;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 if (r28==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_absorb1;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28,r80);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l355; }
 jamaicaScheduler_syncPointFull(ct);
l355:
 if (n15!=0) { goto l352; }
l356:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getSuCurve3;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28);
}
 if (r24==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r13,n12,r28);
{ jamaica_ref m=r28;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r24,r42);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 r42=r30;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l347; }
 jamaicaScheduler_syncPointFull(ct);
 goto l347;
l358:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getSuCurve3;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 if (r26==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r17,n116,r28);
{ jamaica_ref m=r28;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,r42);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l345; }
 jamaicaScheduler_syncPointFull(ct);
 goto l345;
l360:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-56;
 return r43;
LABEL_tASE:    jamaica_throwArrStoreExc(ct);        return JAMAICA_NULL;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return JAMAICA_NULL;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return JAMAICA_NULL;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return JAMAICA_NULL;
}
JBIEXPORT void JBICALL jam_comp_sun_awt_geom_AreaOp_0_resolLinks8(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r4,jamaica_ref r10) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r12=JAMAICA_NULL,r13=JAMAICA_NULL,r15=JAMAICA_NULL,r14=JAMAICA_NULL,r1=JAMAICA_NULL,r5=JAMAICA_NULL,r8=JAMAICA_NULL,r11=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL,r18=JAMAICA_NULL,r19=JAMAICA_NULL,r20=JAMAICA_NULL;
 jamaica_int32 n28=0,n29=0,n30=0,n4=0,n5=0,n7=0,n9=0,n11=0,n12=0,n14=0,n16=0,n18=0,n19=0,n21=0,n22=0,n24=0,n25=0,n26=0,n27=0;
 jamaica_double d0=0,d1=0,d2=0,d3=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+16;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=JAMAICA_BLOCK_GET_R(r10,1);
 r11=JAMAICA_BLOCK_GET_DATA32(r11,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n24=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_size7,1).i;
 n24=((n24>>20) &  ((jamaica_int32)4095));
 n25=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n25=(n25&15);
 JAMAICA_GET_REF_ARRAY(r11,n24,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 n24=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 if (n24!=0) { goto l4; }
 
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

 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_awt_geom_AreaOp_0_EmptykList1,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 goto l7;
l4:
 if ((n24&1)==0) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 r10=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r10==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,jam_str_sun_awt_geom_AreaOp_065);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r10);
l6:
 n24=JAMAICA_ADDS32(n24,2);
 if ((n24<0)) { goto LABEL_tNASE; }
 r13=jamaicaInterpreter_allocSimpleArray(ct,n24,jam_typ_arr1_sun_awt_geom_CurveLink_11);
 r12=r13;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n24=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_toArray24,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r11,n24,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r11;
ct->calledMethod=m;
 r10=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r13);
}
l7:
 r10=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=JAMAICA_BLOCK_GET_R(r10,1);
 r11=JAMAICA_BLOCK_GET_DATA32(r11,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n24=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_size7,1).i;
 n24=((n24>>20) &  ((jamaica_int32)4095));
 n25=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n25=(n25&15);
 JAMAICA_GET_REF_ARRAY(r11,n24,r13);
{ jamaica_ref m=r13;
ct->calledMethod=m;
 n24=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 if (n24!=0) { goto l9; }
 
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

 r13=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_awt_geom_AreaOp_0_EmptynList2,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 goto l12;
l9:
 if ((n24&1)==0) { goto l11; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r10=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r10==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,jam_str_sun_awt_geom_AreaOp_061);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r10);
l11:
 n24=JAMAICA_ADDS32(n24,2);
 if ((n24<0)) { goto LABEL_tNASE; }
 r14=jamaicaInterpreter_allocSimpleArray(ct,n24,jam_typ_arr1_sun_awt_geom_ChainEnd_7);
 r13=r14;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n24=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_toArray24,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r11,n24,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r11;
ct->calledMethod=m;
 r10=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r14);
}
l12:
 n24=0;
 n25=0;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n26=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_clear32,1).i>>20) &  ((jamaica_int32)4095));
 n27=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_GET_REF_ARRAY(r10,n26,r10);
{ jamaica_ref m=r10;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 n26=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n27=((n26>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 n26=(n26&15);
 JAMAICA_GET_REF_ARRAY(r13,0,r10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r13,1,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n26=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n27=((n26>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 n26=(n26&15);
 JAMAICA_GET_REF_ARRAY(r12,0,r14);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r12,1,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 r1=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n26=0;
 n27=0;
 n5=0;
 n4=0;
 r5=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n7=0;
 n9=0;
 n12=0;
 n11=0;
 r8=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n14=0;
 n16=0;
 n19=0;
 n18=0;
 n22=0;
 n21=0;
 if (r0==JAMAICA_NULL) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_R(r0,1);
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n26=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n26=((n26>>20) &  ((jamaica_int32)4095));
 n27=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n27=(n27&15);
l14:
 r16=r13;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 if (r16==JAMAICA_NULL) { goto l16; }
 n4=JAMAICA_BLOCK_GET_DATA32(r16,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 n4=(n4&15);
l16:
 r17=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 if (r17==JAMAICA_NULL) { goto l18; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_R(r17,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n7=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n7=((n7>>20) &  ((jamaica_int32)4095));
 n9=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n9=(n9&15);
l18:
 r18=r12;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 if (r18==JAMAICA_NULL) { goto l20; }
 n11=JAMAICA_BLOCK_GET_DATA32(r18,3).i;
 n12=((n11>>4) &  ((jamaica_int32)268435455));
 n11=(n11&15);
l20:
 r19=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 if (r19==JAMAICA_NULL) { goto l22; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 r8=JAMAICA_BLOCK_GET_R(r19,1);
 r8=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n14=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_add28,1).i;
 n14=((n14>>20) &  ((jamaica_int32)4095));
 n16=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n16=(n16&15);
l22:
 if (r13==JAMAICA_NULL) { goto l24; }
 n18=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n19=((n18>>4) &  ((jamaica_int32)268435455));
 n18=(n18&15);
l24:
 if (r12==JAMAICA_NULL) { goto l83; }
 n21=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n22=((n21>>4) &  ((jamaica_int32)268435455));
 n21=(n21&15);
 if (r0==JAMAICA_NULL) { goto l83; }
 if (r16==JAMAICA_NULL) { goto l83; }
 if (r17==JAMAICA_NULL) { goto l83; }
 if (r18==JAMAICA_NULL) { goto l83; }
 if (r19==JAMAICA_NULL) { goto l83; }
 if (r13==JAMAICA_NULL) { goto l83; }
 if (n27!=0) { goto l83; }
 if (n4!=0) { goto l83; }
 if (n9!=0) { goto l83; }
 if (n11!=0) { goto l83; }
 if (n16!=0) { goto l83; }
 if (n18!=0) { goto l83; }
 if (n21!=0) { goto l83; }
l38:
 if (r10!=JAMAICA_NULL) { goto l40; }
 if (r14==JAMAICA_NULL) { goto l128; }
l40:
 if (r14!=JAMAICA_NULL) { goto l42; }
 n28=1;
 goto l43;
l42:
 n28=0;
l43:
 n29=n28;
 if (r10!=JAMAICA_NULL) { goto l45; }
 n28=1;
 goto l46;
l45:
 n28=0;
l46:
 n30=n28;
 if (n29!=0) { goto l69; }
 if (n28!=0) { goto l69; }
 if ((n24&1)!=0) { goto l51; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0<d1))?-1:((d0==d1)?0:+1))!=0) { goto l51; }
 n28=1;
 goto l52;
l51:
 n28=0;
l52:
 n29=n28;
 if ((n25&1)!=0) { goto l55; }
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14);
}
 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r15);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0<d1))?-1:((d0==d1)?0:+1))!=0) { goto l55; }
 n28=1;
 goto l56;
l55:
 n28=0;
l56:
 n30=n28;
 if (n29!=0) { goto l69; }
 if (n28!=0) { goto l69; }
 r20=r10;
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
 d1=d0;
 r20=r14;
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d2=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
 d3=d2;
 r20=r11;
 if (r20==JAMAICA_NULL) { goto l62; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d2)||(d0>d2))?+1:((d0==d2)?0:-1))>=0) { goto l62; }
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_obstructs9;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d2,n24);
}
 if (n28==0) { goto l62; }
 n28=1;
 goto l63;
l62:
 n28=0;
l63:
 n29=n28;
 r20=r15;
 if (r20==JAMAICA_NULL) { goto l67; }
 d0=d1;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||(d3>d0))?+1:((d3==d0)?0:-1))>=0) { goto l67; }
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_obstructs9;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,d1,d0,n25);
}
 if (n28==0) { goto l67; }
 n28=1;
 goto l68;
l67:
 n28=0;
l68:
 n30=n28;
l69:
 if (n29==0) { goto l73; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_linkTo2;
ct->calledMethod=m;
 r10=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r11);
}
 if (r10==JAMAICA_NULL) { goto l72; }
 JAMAICA_GET_REF_ARRAY_D0(r1,n26,r11);
{ jamaica_ref m=r11;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r10);
}
l72:
 n28=JAMAICA_ADDS32(n24,2);
 n24=n28;
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r16,n28,r10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r16,n28,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l73:
 if (n30==0) { goto l75; }
 if (ct->plainAlloc) {
  r20 = jamaicaGC_PlainAllocHeadBlock(ct,58);
  if (r20 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r20,1)=jam_class_sun_awt_geom_ChainEnd_7;
  }
 } else {
 r20=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_awt_geom_ChainEnd_7);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 if (r20==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20,r14,JAMAICA_NULL);
}
 if (ct->plainAlloc) {
  r14 = jamaicaGC_PlainAllocHeadBlock(ct,58);
  if (r14 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r14,1)=jam_class_sun_awt_geom_ChainEnd_7;
  }
 } else {
 r14=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_awt_geom_ChainEnd_7);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (r14==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14,r15,r20);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_setOterEnd1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20,r14);
}
 JAMAICA_GET_REF_ARRAY_D0(r5,n7,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r15;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r20);
}
 JAMAICA_GET_REF_ARRAY_D0(r5,n7,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r15;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r14);
}
 n28=JAMAICA_ADDS32(n25,2);
 n25=n28;
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r18,n28,r14);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r18,n28,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l75:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l77; }
 jamaicaScheduler_syncPointFull(ct);
l77:
 if (n29!=0) { goto l38; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l80; }
 jamaicaScheduler_syncPointFull(ct);
l80:
 if (n30!=0) { goto l38; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_addLink3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r14);
}
 JAMAICA_GET_REF_ARRAY_D0(r8,n14,r14);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r14;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r19,r10);
}
 n28=JAMAICA_ADDS32(n24,1);
 n24=n28;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r10=r11;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n19))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r13,n28,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n25,1);
 n25=n28;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r14=r15;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n22))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r12,n28,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l38; }
 jamaicaScheduler_syncPointFull(ct);
 goto l38;
l83:
 if (r10!=JAMAICA_NULL) { goto l85; }
 if (r14==JAMAICA_NULL) { goto l128; }
l85:
 if (r14!=JAMAICA_NULL) { goto l87; }
 n28=1;
 goto l88;
l87:
 n28=0;
l88:
 n29=n28;
 if (r10!=JAMAICA_NULL) { goto l90; }
 n28=1;
 goto l91;
l90:
 n28=0;
l91:
 n30=n28;
 if (n29!=0) { goto l114; }
 if (n28!=0) { goto l114; }
 if ((n24&1)!=0) { goto l96; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0<d1))?-1:((d0==d1)?0:+1))!=0) { goto l96; }
 n28=1;
 goto l97;
l96:
 n28=0;
l97:
 n29=n28;
 if ((n25&1)!=0) { goto l100; }
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14);
}
 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r15);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0<d1))?-1:((d0==d1)?0:+1))!=0) { goto l100; }
 n28=1;
 goto l101;
l100:
 n28=0;
l101:
 n30=n28;
 if (n29!=0) { goto l114; }
 if (n28!=0) { goto l114; }
 r20=r10;
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
 d1=d0;
 r20=r14;
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d2=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
 d3=d2;
 r20=r11;
 if (r20==JAMAICA_NULL) { goto l107; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d2)||(d0>d2))?+1:((d0==d2)?0:-1))>=0) { goto l107; }
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_getX4;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_obstructs9;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d2,n24);
}
 if (n28==0) { goto l107; }
 n28=1;
 goto l108;
l107:
 n28=0;
l108:
 n29=n28;
 r20=r15;
 if (r20==JAMAICA_NULL) { goto l112; }
 d0=d1;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d3)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||(d3>d0))?+1:((d3==d0)?0:-1))>=0) { goto l112; }
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_awt_geom_CurveLink_11_getX8;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_AreaOp_0_obstructs9;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,d1,d0,n25);
}
 if (n28==0) { goto l112; }
 n28=1;
 goto l113;
l112:
 n28=0;
l113:
 n30=n28;
l114:
 if (n29==0) { goto l118; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_linkTo2;
ct->calledMethod=m;
 r10=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r11);
}
 if (r10==JAMAICA_NULL) { goto l117; }
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r1,n26,r11);
{ jamaica_ref m=r11;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r10);
}
l117:
 n28=JAMAICA_ADDS32(n24,2);
 n24=n28;
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r16,n28,r10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r16,n28,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l118:
 if (n30==0) { goto l120; }
 if (ct->plainAlloc) {
  r20 = jamaicaGC_PlainAllocHeadBlock(ct,58);
  if (r20 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r20,1)=jam_class_sun_awt_geom_ChainEnd_7;
  }
 } else {
 r20=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_awt_geom_ChainEnd_7);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 if (r20==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20,r14,JAMAICA_NULL);
}
 if (ct->plainAlloc) {
  r14 = jamaicaGC_PlainAllocHeadBlock(ct,58);
  if (r14 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r14,1)=jam_class_sun_awt_geom_ChainEnd_7;
  }
 } else {
 r14=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_awt_geom_ChainEnd_7);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (r14==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14,r15,r20);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_setOterEnd1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20,r14);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r5,n7,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r15;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r20);
}
 JAMAICA_GET_REF_ARRAY(r5,n7,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r15;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r14);
}
 n28=JAMAICA_ADDS32(n25,2);
 n25=n28;
 if (r18==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r18,n28,r14);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r18,n28,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l120:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l122; }
 jamaicaScheduler_syncPointFull(ct);
l122:
 if (n29!=0) { goto l83; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l125; }
 jamaicaScheduler_syncPointFull(ct);
l125:
 if (n30!=0) { goto l83; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_ChainEnd_7_addLink3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r14);
}
 if (r19==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r8,n14,r14);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r14;
ct->calledMethod=m;
 n28=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r19,r10);
}
 n28=JAMAICA_ADDS32(n24,1);
 n24=n28;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r10=r11;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n19))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r13,n28,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n25,1);
 n25=n28;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r14=r15;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n28=JAMAICA_ADDS32(n28,1);
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n22))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r12,n28,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l83; }
 jamaicaScheduler_syncPointFull(ct);
 goto l83;
l128:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n24=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_size7,1).i>>20) &  ((jamaica_int32)4095));
 n25=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_GET_REF_ARRAY(r10,n24,r10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r10;
ct->calledMethod=m;
 n24=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 if ((n24&1)==0) { goto l130; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r,4).r;
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r10,1),3).r;
 n24=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n25=(JAMAICA_BLOCK_GET_DATA32(r11,3).i&15);
 JAMAICA_GET_REF_ARRAY(r11,n24,r11);
{ jamaica_ref m=r11;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,jam_str_sun_awt_geom_AreaOp_061);
}
l130:
 ct->m.cli-=16;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_awt_geom_Order1_14_compareTo21(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0;
 jamaica_double d0=0,d1=0,d4=0,d6=0,d9=0,d2=0,d3=0,d5=0,d7=0,d8=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL,b3=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+10;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_sun_awt_geom_Order1_14_compareTo21;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 r3=r1;
 n0=((r3!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r3,1) == jam_class_sun_awt_geom_Order1_14)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4),1)<=1))?FALSE:(jam_class_sun_awt_geom_Order1_14 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4),3))));
 if (n0!=0) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Curve_10_compareTo38;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1,r2);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-10;
 return n0;
l4:
 if ((r3!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 r1=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r3=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r4=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAY_DOUBLE(r4,1,d0);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r4,0,d1);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0>d1))?+1:((d0==d1)?0:-1))>0) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,jam_str_sun_awt_geom_Order1_1421);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r1);
l6:
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 d1=JAMAICA_BLOCK_GET_DATA64(b0,6).d;
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Math_82_min26;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d1);
}
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 d1=JAMAICA_BLOCK_GET_DATA64(b1,6).d;
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
{ jamaica_ref m=jam_mtd_java_lang_Math_82_min26;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d1);
}
 JAMAICA_SET_ARRAY_DOUBLE(r4,1,d0);
 JAMAICA_GET_ARRAY_DOUBLE(r4,1,d0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE(r4,0,d1);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0>d1))?+1:((d0==d1)?0:-1))>0) { goto l8; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=jam_comp_java_lang_Strinilder_140_append4(ct,r3,jam_str_sun_awt_geom_Order1_1426);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAY_DOUBLE(r2,0,d0);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,d0);
}
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=jam_comp_java_lang_Strinilder_140_append4(ct,r3,jam_str_sun_awt_geom_Order1_1429);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE(r2,1,d0);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,d0);
}
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=jam_comp_java_lang_Strinilder_140_toString20(ct,r3);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r3);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r1);
l8:
 b2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b2,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b3,0).d)||(JAMAICA_BLOCK_GET_DATA64(b2,2).d>JAMAICA_BLOCK_GET_DATA64(b3,0).d))?+1:((JAMAICA_BLOCK_GET_DATA64(b2,2).d==JAMAICA_BLOCK_GET_DATA64(b3,0).d)?0:-1))>0) { goto l13; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b0,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||(JAMAICA_BLOCK_GET_DATA64(b0,0).d<JAMAICA_BLOCK_GET_DATA64(b1,2).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b0,0).d==JAMAICA_BLOCK_GET_DATA64(b1,2).d)?0:+1))!=0) { goto l11; }
 n0=0;
 goto l12;
l11:
 n0=(-1);
l12:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-10;
 return n0;
l13:
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b2,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b3,2).d)||(JAMAICA_BLOCK_GET_DATA64(b2,0).d<JAMAICA_BLOCK_GET_DATA64(b3,2).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b2,0).d==JAMAICA_BLOCK_GET_DATA64(b3,2).d)?0:+1))<0) { goto l15; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-10;
 return 1;
l15:
 d0=(JAMAICA_BLOCK_GET_DATA64(b0,4).d-JAMAICA_BLOCK_GET_DATA64(r5,4).d);
 d1=d0;
 d2=JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 d3=(JAMAICA_BLOCK_GET_DATA64(b0,6).d-d2);
 d4=d3;
 d5=(JAMAICA_BLOCK_GET_DATA64(b1,4).d-JAMAICA_BLOCK_GET_DATA64(r1,4).d);
 d6=d5;
 d7=JAMAICA_BLOCK_GET_DATA64(b1,2).d;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 d8=(JAMAICA_BLOCK_GET_DATA64(b1,6).d-d7);
 d9=d8;
 d0=(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d5,d3)-JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,d8));
 d3=d0;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(d0<((jamaica_double) 0.0)))?-1:((d0==((jamaica_double) 0.0))?0:+1))==0) { goto l21; }
 r1=r0;
 d0=JAMAICA_BLOCK_GET_DATA64(r1,4).d;
 r4=r3;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 d2=JAMAICA_BLOCK_GET_DATA64(r4,4).d;
 d0=(d0-d2);
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,d4);
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,d9);
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 d2=JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d2,d1);
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,d9);
 d0=(d0-d1);
 b0=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 d1=JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,d6);
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,d4);
 d0=(d0+d1);
 d1=d3;
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d0,d1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAY_DOUBLE(r2,0,d1);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0>d1))?+1:((d0==d1)?0:-1))>0) { goto l18; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 d0=JAMAICA_BLOCK_GET_DATA64(b0,6).d;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 d1=JAMAICA_BLOCK_GET_DATA64(b0,6).d;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Math_82_min26;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d1);
}
 goto l22;
l18:
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r2,1,d1);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||(d0>d1))?+1:((d0==d1)?0:-1))>=0) { goto l20; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_ARRAY_DOUBLE(r2,1,d0);
l20:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 d0=JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 d1=JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Math_82_max22;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d1);
}
 goto l22;
l21:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
{ jamaica_ref m=jam_mtd_java_lang_Math_82_max22;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d2,d7);
}
l22:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Order1_14_XforY12;
ct->calledMethod=m;
 d1=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,d0);
}
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_awt_geom_Order1_14_XforY12;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,d0);
}
{ jamaica_ref m=jam_mtd_sun_awt_geom_Curve_10_orderof14;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d1,d0);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-10;
 return n0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return 0;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

