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


JBIEXPORT void JBICALL jam_comp_javax_swing_plaf_metal_MetalBumps_24_paintIcon4(jamaica_thread *ct,jamaica_ref r1,jamaica_ref r4,jamaica_ref r0,jamaica_int32 n12,jamaica_int32 n9) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL;
 jamaica_int32 n6=0,n8=0,n11=0,n13=0,n14=0,n15=0,n16=0,n17=0,n18=0,n19=0,n20=0,n21=0,n22=0,n23=0,n24=0,n25=0,n26=0;
 jamaica_ref b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+7;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_plaf_metal_MetalBumps_24_paintIcon4;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (((r0!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r0,1) == jam_class_java_awt_Graphics2D_98)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),1)<=1))?FALSE:(jam_class_java_awt_Graphics2D_98 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),3))))==0) { goto l4; }
 if ((r0!=JAMAICA_NULL) && (((r0!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r0,1) == jam_class_java_awt_Graphics2D_98)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),1)<=1))?FALSE:(jam_class_java_awt_Graphics2D_98 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),3))))==0)) { goto LABEL_tCCE; }
 r5=r0;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n13=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics2D_98_getDeation7,1).i>>20) &  ((jamaica_int32)4095));
 n14=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n13,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 r5=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 goto l5;
l4:
 r5=JAMAICA_NULL;
l5:
 r6=JAMAICA_BLOCK_GET_DATA32(r1,5).r;
 r7=JAMAICA_BLOCK_GET_DATA32(r1,6).r;
 b1=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
{ jamaica_ref m=jam_mtd_javax_swing_plaf_metal_MetalBumps_24_getBuffer1;
ct->calledMethod=m;
 r5=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r5,r6,r7,r8);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b1,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b1,3).r=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b1,3).r=new_ref;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n13=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_plaf_metal_BumpBuffer_0_getImeSize3,1).i>>20) &  ((jamaica_int32)4095));
 n14=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n13,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 r5=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 r5=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n14=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_plaf_metal_BumpBuffer_0_getImeSize3,1).i>>20) &  ((jamaica_int32)4095));
 n15=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n14,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 r5=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n14=JAMAICA_BLOCK_GET_DATA32(r5,4).i;
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_plaf_metal_MetalBumps_24_getIcWidth5,1).i>>20) &  ((jamaica_int32)4095));
 n16=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n15,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 n15=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 n17=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_plaf_metal_MetalBumps_24_getIceight6,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r5,n17,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n16=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 n15=JAMAICA_ADDS32(n12,n15);
 n16=JAMAICA_ADDS32(n9,n16);
 n17=n16;
 n18=n14;
 n19=n12;
 n20=n15;
 n21=n13;
 r5=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n6=0;
 n8=0;
 b1=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 if (r0==JAMAICA_NULL) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_R(r0,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n12=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics_97_drawImage36,1).i;
 n6=((n12>>20) &  ((jamaica_int32)4095));
 n12=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n8=(n12&15);
l7:
 if (n9>=n17) { goto l20; }
 n12=JAMAICA_SUBS32(n16,n9);
 n22=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n22>>20) |  ((n22>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n22=n12;
 if (n12>n18) { goto l10; }
 n12=n22;
 goto l11;
l10:
 n12=n18;
l11:
 n22=n12;
 n12=n19;
 n23=n9;
 n11=JAMAICA_ADDS32(n23,n22);
l12:
 if (n12>=n20) { goto l18; }
 n24=JAMAICA_SUBS32(n15,n12);
 n25=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n25>>20) |  ((n25>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n25=n24;
 if (n24>n21) { goto l15; }
 n24=n25;
 goto l16;
l15:
 n24=n21;
l16:
 r6=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n25=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_plaf_metal_BumpBuffer_0_getImage2,1).i>>20) &  ((jamaica_int32)4095));
 n26=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n25,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 r6=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r5,n6,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 n24=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r6,n12,n23,JAMAICA_ADDS32(n12,n24),n11,0,0,n24,n22,JAMAICA_NULL);
}
 n12=JAMAICA_ADDS32(n12,n13);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l12; }
 jamaicaScheduler_syncPointFull(ct);
 goto l12;
l18:
 n9=JAMAICA_ADDS32(n9,n14);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 jamaicaScheduler_syncPointFull(ct);
 goto l7;
l20:
 
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
 ct->m.cli=tp-7;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

