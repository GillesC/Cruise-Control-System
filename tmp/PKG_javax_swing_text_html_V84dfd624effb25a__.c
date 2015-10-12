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


JBIEXPORT jamaica_int32 JBICALL jam_comp_javax_swing_text_html_CSSBorder_39_getBoWidth2(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n1=0,n2=0,n3=0;
 jamaica_float f0=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoWidth2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n1=0;
 r1=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_CSSBorder_39_ATTRIBUTES0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r2,1,r2);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=jamaicaInterpreter_getInterfaceMethod(ct,r1,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2);
}
 n2=((r1!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r1,1) == jam_class_javax_swing_text_html_CSS_0Style_22)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),1)<=1))?FALSE:(jam_class_javax_swing_text_html_CSS_0Style_22 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),3))));
 if ((r1!=JAMAICA_NULL) && (n2==0)) { goto LABEL_tCCE; }
 if (r1==JAMAICA_NULL) { goto l7; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_CSS_0Style_22_getValue1,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n2,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_CSS_0Value_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_CSS_0Value_38,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r1==JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_CSS_0Value_38_NONE1,7).r,4).r) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n1&15);
 JAMAICA_GET_REF_ARRAY(r1,2,r1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n1&15);
 JAMAICA_GET_REF_ARRAY(r1,n0,r1);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r0,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1);
}
 if ((r0!=JAMAICA_NULL) && (((r0!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r0,1) == jam_class_javax_swing_text_html_CSS_0Value_32)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),1)<=1))?FALSE:(jam_class_javax_swing_text_html_CSS_0Value_32 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),3))))==0)) { goto LABEL_tCCE; }
 r1=r0;
 if (r0!=JAMAICA_NULL) { goto l6; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_CSSBorder_39_DEFAULTS2,7).r,4).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n1&15);
 JAMAICA_GET_REF_ARRAY(r0,2,r0);
 if ((r0!=JAMAICA_NULL) && (((r0!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r0,1) == jam_class_javax_swing_text_html_CSS_0Value_32)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),1)<=1))?FALSE:(jam_class_javax_swing_text_html_CSS_0Value_32 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r0,1),4),3))))==0)) { goto LABEL_tCCE; }
 r1=r0;
l6:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_CSS_0Value_32_getValue3,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n1,r0);
{ jamaica_ref m=r0;
ct->calledMethod=m;
 f0=((jamaica_float(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1);
}
 n1=JAMAICA_CAST_DOUBLE_TO_INTEGER((jamaica_double)f0);
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return n1;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return 0;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_CSSBorder_39_getWidths3(jamaica_thread *ct,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n5=0,n6=0,n0=0,n2=0,n3=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+7;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getWidths3;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r2=jamaicaInterpreter_allocSimpleArray(ct,4,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n5=0;
 r3=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n0=0;
 n3=0;
 n2=0;
 if (r3==JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n0=((n0>>4) &  ((jamaica_int32)268435455));
l4:
 if (r2==JAMAICA_NULL) { goto l10; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 n2=(n2&15);
 if (r3==JAMAICA_NULL) { goto l10; }
 if (n2!=0) { goto l10; }
l7:
 if (n5>=n0) { goto l13; }
 n6=jam_comp_javax_swing_text_html_CSSBorder_39_getBoWidth2(ct,r1,n5);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r2,n5,n6);
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 jamaicaScheduler_syncPointFull(ct);
 goto l7;
l10:
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n5>=n0) { goto l13; }
 n6=jam_comp_javax_swing_text_html_CSSBorder_39_getBoWidth2(ct,r1,n5);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n5,n6);
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l10; }
 jamaicaScheduler_syncPointFull(ct);
 goto l10;
l13:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-7;
 return r3;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT void JBICALL jam_comp_javax_swing_text_html_CSSBorder_39_paintorder9(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r6,jamaica_ref r5,jamaica_int32 n13,jamaica_int32 n14,jamaica_int32 n15,jamaica_int32 n16) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r3=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r11=JAMAICA_NULL;
 jamaica_int32 n19=0,n20=0,n21=0,n25=0,n17=0,n18=0,n22=0,n23=0,n24=0;
 jamaica_double d0=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+16;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_paintorder9;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_CSSBorder_39__0002abled5,4).i!=0) { goto l5; }
 if (((r5!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r5,1) == jam_class_java_awt_Graphics2D_98)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r5,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r5,1),4),1)<=1))?FALSE:(jam_class_java_awt_Graphics2D_98 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r5,1),4),3))))!=0) { goto l5; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r5=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_AsserError_8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_AsserError_8__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,jam_str_javax_swing_text_html_CSSBorder_3939);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r5);
l5:
 if ((r5!=JAMAICA_NULL) && (((r5!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r5,1) == jam_class_java_awt_Graphics2D_98)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r5,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r5,1),4),1)<=1))?FALSE:(jam_class_java_awt_Graphics2D_98 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r5,1),4),3))))==0)) { goto LABEL_tCCE; }
 r7=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r1=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n17=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics_97_getColor4,1).i>>20) &  ((jamaica_int32)4095));
 n18=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n17,r9);
{ jamaica_ref m=r9;
ct->calledMethod=m;
 r9=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n17=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics_97_getClip15,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r8,n17,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 r7=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r8=jam_comp_javax_swing_text_html_CSSBorder_39_getWidths3(ct,r0);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n17=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n18=((n17>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n18))) { goto LABEL_tAIOOBE; }
 n17=(n17&15);
 JAMAICA_GET_ARRAY32(r8,3,n19);
 n13=JAMAICA_ADDS32(n13,n19);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n18))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r8,0,n20);
 n14=JAMAICA_ADDS32(n14,n20);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n18))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r8,1,n21);
 n19=JAMAICA_SUBS32(n15,JAMAICA_ADDS32(n21,n19));
 n15=n19;
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n18))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r8,2,n17);
 n17=JAMAICA_SUBS32(n16,JAMAICA_ADDS32(n20,n17));
 n18=n17;
 r8=jamaicaInterpreter_allocSimpleArray(ct,4,jam_typ_arr2_I);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r10=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[10]);
 JAMAICA_SET_ARRAY32_D0(r10,0,n13);
 JAMAICA_SET_ARRAY32_D0(r10,1,n14);
 r11=JAMAICA_BLOCK_GET_R(r8,1);
 r11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r11,7).r,1).r,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 if ((r10!=JAMAICA_NULL)&&(r11!=jam_class_java_lang_Object_92)&&((r11==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r10,1),r11)))) { goto LABEL_tASE; }
 JAMAICA_SET_REF_ARRAY_D0(ct,r8,0,r10);
 r10=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[10]);
 n19=JAMAICA_ADDS32(n13,n19);
 JAMAICA_SET_ARRAY32_D0(r10,0,n19);
 JAMAICA_SET_ARRAY32_D0(r10,1,n14);
 if ((r10!=JAMAICA_NULL)&&(r11!=jam_class_java_lang_Object_92)&&((r11==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r10,1),r11)))) { goto LABEL_tASE; }
 JAMAICA_SET_REF_ARRAY_D0(ct,r8,1,r10);
 r10=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[10]);
 JAMAICA_SET_ARRAY32_D0(r10,0,n19);
 n17=JAMAICA_ADDS32(n14,n17);
 JAMAICA_SET_ARRAY32_D0(r10,1,n17);
 if ((r10!=JAMAICA_NULL)&&(r11!=jam_class_java_lang_Object_92)&&((r11==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r10,1),r11)))) { goto LABEL_tASE; }
 JAMAICA_SET_REF_ARRAY_D0(ct,r8,2,r10);
 r10=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[10]);
 JAMAICA_SET_ARRAY32_D0(r10,0,n13);
 JAMAICA_SET_ARRAY32_D0(r10,1,n17);
 if ((r10!=JAMAICA_NULL)&&(r11!=jam_class_java_lang_Object_92)&&((r11==JAMAICA_NULL) || (!jamaicaClasses_compatibleClass(ct,JAMAICA_BLOCK_GET_R(r10,1),r11)))) { goto LABEL_tASE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r8,3,r10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n17=0;
 r10=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_CSS_0Value_38_NONE1,7).r;
 n13=n15;
 r11=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n14=0;
 n19=0;
 r3=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n20=0;
 n15=0;
 n21=0;
 n16=0;
 if (r8==JAMAICA_NULL) { goto l7; }
 n19=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n14=((n19>>4) &  ((jamaica_int32)268435455));
 n19=(n19&15);
l7:
 if (r11==JAMAICA_NULL) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(r11,1);
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n20=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics2D_98_translate13,1).i;
 n20=((n20>>20) &  ((jamaica_int32)4095));
 n15=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n15=(n15&15);
 n21=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics2D_98_rotate15,1).i;
 n21=((n21>>20) &  ((jamaica_int32)4095));
 n16=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics_97_setClip16,1).i;
 n16=((n16>>20) &  ((jamaica_int32)4095));
l9:
 if (r8==JAMAICA_NULL) { goto l22; }
 if (r11==JAMAICA_NULL) { goto l22; }
 if (n19!=0) { goto l22; }
 if (n15!=0) { goto l22; }
l13:
 if (n17>=4) { goto l31; }
 n22=n17;
{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoStyle4;
ct->calledMethod=m;
 r12=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,n22);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoShape5;
ct->calledMethod=m;
 r13=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,n22);
}
 r14=r13;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n23=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_CSS_0Value_38,5).i;
 if (((n23>>20) |  ((n23>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_CSS_0Value_38,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 if (r12==JAMAICA_BLOCK_GET_DATA32(b0,4).r) { goto l20; }
 if (r13==JAMAICA_NULL) { goto l20; }
 if (JAMAICA_MODS32(n22,2)!=0) { goto l18; }
 n22=n13;
 goto l19;
l18:
 n22=n18;
l19:
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(r14,4).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n23=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n24=((n23>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 n23=(n23&15);
 JAMAICA_GET_ARRAY32(r12,2,n25);
 n25=JAMAICA_ADDS32(n25,n22);
 JAMAICA_SET_ARRAY32(r12,2,n25);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r12,3,n25);
 n22=JAMAICA_ADDS32(n25,n22);
 JAMAICA_SET_ARRAY32(r12,3,n22);
{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoColor1;
ct->calledMethod=m;
 r12=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n17);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBointer6;
ct->calledMethod=m;
 r13=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n17);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(((jamaica_double)n17),((jamaica_double) 3.141592653589793)),((jamaica_double) 2.0));
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r8,n17,r15);
 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
 n22=JAMAICA_BLOCK_GET_DATA32(r15,3).i;
 n23=((n22>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 n22=(n22&15);
 JAMAICA_GET_ARRAY32(r15,0,n24);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r15,1,n22);
 JAMAICA_GET_REF_ARRAY_D0(r3,n20,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,n24,n22);
}
 JAMAICA_GET_REF_ARRAY_D0(r3,n21,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,d0);
}
 JAMAICA_GET_REF_ARRAY_D0(r3,n16,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,r14);
}
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r13,jam_mtd_javax_swing_text_html_CSSBointer_40_paint0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r13,r14,r5,r12,n17);
}
 JAMAICA_GET_REF_ARRAY_D0(r3,n21,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,(-(d0)));
}
 JAMAICA_GET_REF_ARRAY_D0(r8,n17,r12);
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n22=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n23=((n22>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 n22=(n22&15);
 JAMAICA_GET_ARRAY32(r12,0,n24);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r12,1,n22);
 JAMAICA_GET_REF_ARRAY_D0(r3,n20,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,(-(n24)),(-(n22)));
}
l20:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l13; }
 jamaicaScheduler_syncPointFull(ct);
 goto l13;
l22:
 if (n17>=4) { goto l31; }
 n22=n17;
{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoStyle4;
ct->calledMethod=m;
 r12=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,n22);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoShape5;
ct->calledMethod=m;
 r13=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,n22);
}
 r14=r13;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n23=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_CSS_0Value_38,5).i;
 if (((n23>>20) |  ((n23>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_CSS_0Value_38,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 if (r12==JAMAICA_BLOCK_GET_DATA32(b0,4).r) { goto l29; }
 if (r13==JAMAICA_NULL) { goto l29; }
 if (JAMAICA_MODS32(n22,2)!=0) { goto l27; }
 n22=n13;
 goto l28;
l27:
 n22=n18;
l28:
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(r14,4).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n23=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n24=((n23>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 n23=(n23&15);
 JAMAICA_GET_ARRAY32(r12,2,n25);
 n25=JAMAICA_ADDS32(n25,n22);
 JAMAICA_SET_ARRAY32(r12,2,n25);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r12,3,n25);
 n22=JAMAICA_ADDS32(n25,n22);
 JAMAICA_SET_ARRAY32(r12,3,n22);
{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBoColor1;
ct->calledMethod=m;
 r12=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n17);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSSBorder_39_getBointer6;
ct->calledMethod=m;
 r13=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n17);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(((jamaica_double)n17),((jamaica_double) 3.141592653589793)),((jamaica_double) 2.0));
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r8,n17,r15);
 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
 n22=JAMAICA_BLOCK_GET_DATA32(r15,3).i;
 n23=((n22>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 n22=(n22&15);
 JAMAICA_GET_ARRAY32(r15,0,n24);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r15,1,n22);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r3,n20,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,n24,n22);
}
 JAMAICA_GET_REF_ARRAY(r3,n21,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,d0);
}
 JAMAICA_GET_REF_ARRAY(r3,n16,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,r14);
}
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r13,jam_mtd_javax_swing_text_html_CSSBointer_40_paint0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r13,r14,r5,r12,n17);
}
 JAMAICA_GET_REF_ARRAY(r3,n21,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,(-(d0)));
}
 JAMAICA_GET_REF_ARRAY(r8,n17,r12);
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n22=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n23=((n22>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 n22=(n22&15);
 JAMAICA_GET_ARRAY32(r12,0,n24);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r12,1,n22);
 JAMAICA_GET_REF_ARRAY(r3,n20,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,(-(n24)),(-(n22)));
}
l29:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l22; }
 jamaicaScheduler_syncPointFull(ct);
 goto l22;
l31:
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n17=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics_97_setColor5,1).i>>20) &  ((jamaica_int32)4095));
 n18=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n17,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r9);
}
 n17=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Graphics_97_setClip16,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r5,n17,r5);
 
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

{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r7);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-16;
 return;
LABEL_tASE:    jamaica_throwArrStoreExc(ct);        return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_MuxinteSet_134_getAtbutes3(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-5]=ct->f;ct->f=tp-5;
 ct->s[tp-4]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_MuxinteSet_134_getAtbutes3;ct->s[tp-3]=(jamaica_int32)m;ct->m.cl[tp-3]=m;}
 ct->s[tp-1]=0;
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r0,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(r0,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,r0);
  }
 }
 ct->s[tp-1]=(jamaica_int32)r0; 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=ct->m.cl[tp-1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}ct->m.cl[tp-1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}ct->m.cl[tp-1]=new_ref;}
#endif

 ct->s[tp-1]=0; 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=ct->m.cl[tp-1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}ct->m.cl[tp-1]=JAMAICA_NULL;}
#else
{ct->m.cl[tp-1]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r0,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r0,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r0,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r0);
  }
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-5];
 ct->m.cl[tp-3]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return JAMAICA_BLOCK_GET_DATA32(r0,3).r;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_MuxinteSet_134_getAtibute10(jamaica_thread *ct,jamaica_ref r2,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n1=0,n2=0,n4=0,n5=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_MuxinteSet_134_getAtibute10;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n4=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_MuxinteSet_134_getAtbutes3,1).i>>20) &  ((jamaica_int32)4095));
 n5=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n4,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r3=r2;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=((JAMAICA_BLOCK_GET_DATA32(r2,3).i>>4) &  ((jamaica_int32)268435455));
 n5=0;
 r2=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n2=0;
 n1=0;
 if (r2==JAMAICA_NULL) { goto l4; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 n1=(n1&15);
l4:
 if (r2==JAMAICA_NULL) { goto l11; }
 if (n1!=0) { goto l11; }
l6:
 if (n5>=n4) { goto l16; }
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY_D0(r2,n5,r3);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r3,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1);
}
 r4=r3;
 if (r3==JAMAICA_NULL) { goto l9; }
 
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
 ct->m.cli=tp-6;
 return r4;
l9:
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l6; }
 jamaicaScheduler_syncPointFull(ct);
 goto l6;
l11:
 if (n5>=n4) { goto l16; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_REF_ARRAY(r2,n5,r3);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r3,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1);
}
 r4=r3;
 if (r3==JAMAICA_NULL) { goto l14; }
 
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
 ct->m.cli=tp-6;
 return r4;
l14:
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l11; }
 jamaicaScheduler_syncPointFull(ct);
 goto l11;
l16:
 
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
 ct->m.cli=tp-6;
 return JAMAICA_NULL;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_StyleSheet_143_getRule1(jamaica_thread *volatile ct,jamaica_ref volatile r6,jamaica_ref volatile r7,jamaica_ref volatile r8) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r11=JAMAICA_NULL,r10=JAMAICA_NULL,r13=JAMAICA_NULL,r16=JAMAICA_NULL,r4=JAMAICA_NULL,r12=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r17=JAMAICA_NULL,r18=JAMAICA_NULL,r19=JAMAICA_NULL,r20=JAMAICA_NULL;
 jamaica_int32 volatile n8=0,n9=0,n10=0,n11=0,n12=0,n13=0;
 jamaica_ref volatile b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL,b3=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+18;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  switch(n8) {
  case 1:  goto l31;
  case 2:  goto l32;
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_javax_swing_text_html_StyleSheet_143_getRule1;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r10=JAMAICA_NULL;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n8=0;
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_Styleuffer_152,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_Styleuffer_152,-1);
 }
{ jamaica_ref m=jam_mtd_javax_swing_text_html_Styleuffer_152_obtaiuffer1;
ct->calledMethod=m;
 r11=((jamaica_ref(JBICALL *)(jamaica_thread *))JAMAICA_BLOCK_GET_P(m,4))(ct);
}
 r10=r11;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n8=1;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r11,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_Styleuffer_152_getVector4,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n9,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 r11=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r12=r11;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r4=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n9=0;
 n10=0;
 if (r12==JAMAICA_NULL) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_R(r12,1);
 r4=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_addElement19,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n10=(n10&15);
 if (n10!=0) { goto l7; }
l4:
 if (r8==JAMAICA_NULL) { goto l10; }
 JAMAICA_GET_REF_ARRAY_D0(r4,n9,r13);
{ jamaica_ref m=r13;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r12,r8);
}
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r8,jam_mtd_javax_swing_text_Element_88_getPaement1);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l4; }
 jamaicaScheduler_syncPointFull(ct);
 goto l4;
l7:
 if (r8==JAMAICA_NULL) { goto l10; }
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r4,n9,r13);
{ jamaica_ref m=r13;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r12,r8);
}
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r8,jam_mtd_javax_swing_text_Element_88_getPaement1);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 jamaicaScheduler_syncPointFull(ct);
 goto l7;
l10:
 
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

 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r11,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_size7,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n9,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r10,1),3).r;
 n10=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_Styleuffer_152_getStuffer3,1).i>>20) &  ((jamaica_int32)4095));
 n11=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n10,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 r12=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n9=JAMAICA_SUBS32(n9,1);
 r8=r11;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r4=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n10=0;
 n11=0;
 if (r8==JAMAICA_NULL) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_R(r8,1);
 r4=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n10=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_elementAt13,1).i;
 n10=((n10>>20) &  ((jamaica_int32)4095));
 n11=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n11=(n11&15);
l12:
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_Styletants_153_NameAibute0,7).r;
 r13=r12;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_HTML_ibute_65_ID24,7).r;
 r14=r12;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_HTML_ibute_65_ID24,7).r;
 b3=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_HTML_ibute_65_CLASS36,7).r;
 r15=r12;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

l13:
 if (n9<1) { goto l21; }
 n12=n9;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r4,n10,r16);
{ jamaica_ref m=r16;
ct->calledMethod=m;
 r16=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,n12);
}
 n12=((r16!=JAMAICA_NULL) && jamaicaClasses_compatibleClassInterface(ct,JAMAICA_BLOCK_GET_R(r16,1),jam_class_javax_swing_text_Element_88));
 if ((r16!=JAMAICA_NULL) && (n12==0)) { goto LABEL_tCCE; }
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
 r17=jamaicaInterpreter_getInterfaceMethod(ct,r16,jam_mtd_javax_swing_text_Element_88_getAtbutes3);
{ jamaica_ref m=r17;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r16=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 r17=r16;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n12=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_Styletants_153,5).i;
 if (((n12>>20) |  ((n12>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_Styletants_153,-1);
 }
 r18=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
 r19=jamaicaInterpreter_getInterfaceMethod(ct,r16,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

{ jamaica_ref m=r19;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16,r18);
}
 if (r18==JAMAICA_NULL) { goto LABEL_tNPE; }
 r20=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r18,1),3).r;
 n12=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_Object_92_toString7,1).i>>20) &  ((jamaica_int32)4095));
 n13=(JAMAICA_BLOCK_GET_DATA32(r20,3).i&15);
 JAMAICA_GET_REF_ARRAY(r20,n12,r20);
{ jamaica_ref m=r20;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r18);
}
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 r18=jam_comp_java_lang_Strinuffer_139_append10(ct,r13,r18);
 if (r16==JAMAICA_NULL) { goto l19; }
 n12=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 if (((n12>>20) |  ((n12>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_HTML_ibute_65,-1);
 }
 r18=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 r20=jamaicaInterpreter_getInterfaceMethod(ct,r16,jam_mtd_javax_swing_text_AttriteSet_15_isDefined1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

{ jamaica_ref m=r20;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n12=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16,r18);
}
 if (n12==0) { goto l17; }
 
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
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 r16=jam_comp_java_lang_Strinuffer_139_append16(ct,r14,35);
 n12=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 if (((n12>>20) |  ((n12>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_HTML_ibute_65,-1);
 }
 r16=JAMAICA_BLOCK_GET_DATA32(b2,4).r;
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r16=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r16);
}
{ jamaica_ref m=jam_mtd_java_lang_Strinuffer_139_append9;
ct->calledMethod=m;
 r16=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14,r16);
}
 goto l19;
l17:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 n12=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 r17=JAMAICA_BLOCK_GET_DATA32(b3,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r20;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n12=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16,r17);
}
 if (n12==0) { goto l19; }
 r17=jam_comp_java_lang_Strinuffer_139_append16(ct,r13,46);
 n12=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 r17=JAMAICA_BLOCK_GET_DATA32(b3,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r19;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r16=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16,r17);
}
{ jamaica_ref m=jam_mtd_java_lang_Strinuffer_139_append9;
ct->calledMethod=m;
 r16=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13,r16);
}
l19:
 
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

 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
 r16=jam_comp_java_lang_Strinuffer_139_append16(ct,r15,32);
 n9=JAMAICA_ADDS32(n9,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l13; }
 jamaicaScheduler_syncPointFull(ct);
 goto l13;
l21:
 
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

 r8=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r8,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_HTML_24Tag_66_toString5,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n9,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8);
}
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=jam_comp_java_lang_Strinuffer_139_append10(ct,r12,r4);
 r4=r11;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r13=JAMAICA_BLOCK_GET_R(r4,1);
 r13=JAMAICA_BLOCK_GET_DATA32(r13,3).r;
 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_Vector_210_elementAt13,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n10=(n10&15);
 JAMAICA_GET_REF_ARRAY(r13,n9,r13);
{ jamaica_ref m=r13;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,0);
}
 n9=((r4!=JAMAICA_NULL) && jamaicaClasses_compatibleClassInterface(ct,JAMAICA_BLOCK_GET_R(r4,1),jam_class_javax_swing_text_Element_88));
 if ((r4!=JAMAICA_NULL) && (n9==0)) { goto LABEL_tCCE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r13=jamaicaInterpreter_getInterfaceMethod(ct,r4,jam_mtd_javax_swing_text_Element_88_getAtbutes3);
{ jamaica_ref m=r13;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r13=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r17=r13;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r4,jam_mtd_javax_swing_text_Element_88_isLeaf9);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 if (n9==0) { goto l25; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r13,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13,r8);
}
 r4=r8;
 if (((r8!=JAMAICA_NULL) && jamaicaClasses_compatibleClassInterface(ct,JAMAICA_BLOCK_GET_R(r8,1),jam_class_javax_swing_text_AttriteSet_15))==0) { goto l24; }
 if ((r4!=JAMAICA_NULL) && (((r4!=JAMAICA_NULL) && jamaicaClasses_compatibleClassInterface(ct,JAMAICA_BLOCK_GET_R(r4,1),jam_class_javax_swing_text_AttriteSet_15))==0)) { goto LABEL_tCCE; }
 r17=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 goto l25;
l24:
 r17=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l25:
 
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

 r8=r17;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r8==JAMAICA_NULL) { goto l30; }
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_HTML_ibute_65,-1);
 }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_HTML_ibute_65_ID24,7).r,4).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r13=jamaicaInterpreter_getInterfaceMethod(ct,r8,jam_mtd_javax_swing_text_AttriteSet_15_isDefined1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

{ jamaica_ref m=r13;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,r4);
}
 if (n9==0) { goto l28; }
 
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

 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=jam_comp_java_lang_Strinuffer_139_append16(ct,r12,35);
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_HTML_ibute_65,-1);
 }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_HTML_ibute_65_ID24,7).r,4).r;
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r8);
}
{ jamaica_ref m=jam_mtd_java_lang_Strinuffer_139_append9;
ct->calledMethod=m;
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r12,r8);
}
 goto l30;
l28:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_javax_swing_text_html_HTML_ibute_65_CLASS36,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r13;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,r4);
}
 if (n9==0) { goto l30; }
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=jam_comp_java_lang_Strinuffer_139_append16(ct,r12,46);
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_HTML_ibute_65,5).i;
 r4=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r8,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,r4);
}
{ jamaica_ref m=jam_mtd_java_lang_Strinuffer_139_append9;
ct->calledMethod=m;
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r12,r8);
}
l30:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r12=jam_comp_java_lang_Strinuffer_139_toString30(ct,r12);
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_StyleSheet_143_getReStyle38;
ct->calledMethod=m;
 r11=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,r12,r11,r7);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n8=0;
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_Styleuffer_152,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_Styleuffer_152,-1);
 }
{ jamaica_ref m=jam_mtd_javax_swing_text_html_Styleuffer_152_releauffer2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-18;
 return r11;
l31:
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r11=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 goto l33;
l32:
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r11=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

l33:
 n8=2;
 n8=0;
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_Styleuffer_152,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_Styleuffer_152,-1);
 }
{ jamaica_ref m=jam_mtd_javax_swing_text_html_Styleuffer_152_releauffer2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r11);
return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_StyleonSet_154_getAtibute2(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+9;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_StyleonSet_154_getAtibute2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n0=((r2!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r2,1) == jam_class_javax_swing_text_Styletants_153)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4) == JAMAICA_NULL)?FALSE:(jam_class_javax_swing_text_Styletants_153 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4),2))));
 if (n0==0) { goto l6; }
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(r3,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_StyleSheet_143,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_StyleSheet_143,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_StyleSheet_143_acces2400049;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 if ((r2!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_R(r4,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_CSS_18_styleSSKey4,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n1=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n1=(n1&15);
 JAMAICA_GET_REF_ARRAY(r5,n0,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,r2);
}
 if (r4==JAMAICA_NULL) { goto l6; }
 r4=jam_comp_javax_swing_text_StyleteSet_163_getAtibute11(ct,r3,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(r3,6).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_StyleSheet_143,5).i;
{ jamaica_ref m=jam_mtd_javax_swing_text_html_StyleSheet_143_acces2400049;
ct->calledMethod=m;
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_CSS_18_cssVaValue6,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n0,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r0;
ct->calledMethod=m;
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2,r4);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-9;
 return r1;
l6:
 
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
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
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

 r1=jam_comp_javax_swing_text_StyleteSet_163_getAtibute11(ct,r0,r1);
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-9;
 return r1;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_StyleteSet_155_getAtibute2(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+9;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_StyleteSet_155_getAtibute2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n0=((r2!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r2,1) == jam_class_javax_swing_text_Styletants_153)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4) == JAMAICA_NULL)?FALSE:(jam_class_javax_swing_text_Styletants_153 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4),2))));
 if (n0==0) { goto l6; }
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(r3,5).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_javax_swing_text_html_StyleSheet_143,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_javax_swing_text_html_StyleSheet_143,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_javax_swing_text_html_StyleSheet_143_acces2400049;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 if ((r2!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_R(r4,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_CSS_18_styleSSKey4,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n1=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n1=(n1&15);
 JAMAICA_GET_REF_ARRAY(r5,n0,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,r2);
}
 if (r4==JAMAICA_NULL) { goto l6; }
 r5=JAMAICA_BLOCK_GET_R(r3,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_StyleteSet_155_doGetibute3,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n1=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n1=(n1&15);
 JAMAICA_GET_REF_ARRAY(r5,n0,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r4);
}
 n0=((r4!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r4,1) == jam_class_javax_swing_text_html_CSS_0Value_25)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4) == JAMAICA_NULL)?FALSE:(jam_class_javax_swing_text_html_CSS_0Value_25 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4),2))));
 if (n0==0) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if ((r4!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 r1=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r3,4).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_CSS_0Value_25_toStytants4,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2,r0);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-9;
 return r1;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_StyleteSet_155_doGetibute3,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
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

{ jamaica_ref m=r2;
ct->calledMethod=m;
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-9;
 return r1;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_StyleteSet_155_doGetibute3(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_StyleteSet_155_doGetibute3;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r2=jam_comp_javax_swing_text_html_MuxinteSet_134_getAtibute10(ct,r0,r1);
 r3=r2;
 if (r2==JAMAICA_NULL) { goto l4; }
 
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
 ct->m.cli=tp-6;
 return r3;
l4:
 n0=((r1!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r1,1) == jam_class_javax_swing_text_html_CSS_0ibute_19)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4) == JAMAICA_NULL)?FALSE:(jam_class_javax_swing_text_html_CSS_0ibute_19 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),2))));
 if (n0==0) { goto l8; }
 if ((r1!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 r2=r1;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_javax_swing_text_html_CSS_0ibute_19_isInhrited3;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if (n0==0) { goto l8; }
 r2=JAMAICA_BLOCK_GET_R(r0,1);
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_StyleteSet_155_getRearent4,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n1=(n1&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 if (r0==JAMAICA_NULL) { goto l8; }
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r0,jam_mtd_javax_swing_text_AttriteSet_15_getAtibute4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return r0;
l8:
 
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
 ct->m.cli=tp-6;
 return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_javax_swing_text_html_StyleteSet_155_getRearent4(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+5;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_StyleteSet_155_getRearent4;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 r0=JAMAICA_BLOCK_GET_DATA32(r0,4).r;
 if (r0!=JAMAICA_NULL) { goto l4; }
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-5;
 return JAMAICA_NULL;
l4:
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_View_185_getParent1,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n0,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 r1=r0;
 if (r0==JAMAICA_NULL) { goto l6; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_View_185_getAtbutes27,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n0,r0);
{ jamaica_ref m=r0;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 goto l7;
l6:
 r0=JAMAICA_NULL;
l7:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-5;
 return r0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

