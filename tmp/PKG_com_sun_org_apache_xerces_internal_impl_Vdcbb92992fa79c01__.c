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


JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanDument2(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n22) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r19=JAMAICA_NULL,r18=JAMAICA_NULL,r3=JAMAICA_NULL,r5=JAMAICA_NULL,r7=JAMAICA_NULL,r9=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL;
 jamaica_int32 n25=0,n2=0,n4=0,n6=0,n8=0,n10=0,n12=0,n14=0,n16=0,n18=0,n20=0,n23=0,n24=0;
 jamaica_ref b0=JAMAICA_NULL,b3=JAMAICA_NULL,b6=JAMAICA_NULL,b9=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+17;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanDument2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,7).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r11,1),3).r;
 n23=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnnager_24_setEnndler9,1).i>>20) &  ((jamaica_int32)4095));
 n24=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n23,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,r0);
}
 r11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n23=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_next3,1).i>>20) &  ((jamaica_int32)4095));
 n24=(JAMAICA_BLOCK_GET_DATA32(r11,3).i&15);
 JAMAICA_GET_REF_ARRAY(r11,n23,r11);
{ jamaica_ref m=r11;
ct->calledMethod=m;
 n23=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 r11=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 r12=JAMAICA_BLOCK_GET_R(r11,1);
 r12=JAMAICA_BLOCK_GET_DATA32(r12,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n24=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_getChrData19,1).i;
 n24=((n24>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n2=(n2&15);
 r13=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b3=JAMAICA_BLOCK_GET_DATA32(r13,7).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b3,0).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b3,3).r;
 r3=JAMAICA_BLOCK_GET_R(r13,1);
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n4=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_getPIarget17,1).i;
 n4=((n4>>20) &  ((jamaica_int32)4095));
 n6=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n6=(n6&15);
 n8=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_getPIData18,1).i;
 n8=((n8>>20) &  ((jamaica_int32)4095));
 r14=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(r14,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,0).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,3).r;
 r5=JAMAICA_BLOCK_GET_R(r14,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n10=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_getChrData19,1).i;
 n10=((n10>>20) &  ((jamaica_int32)4095));
 n12=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n12=(n12&15);
 r15=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 b9=JAMAICA_BLOCK_GET_DATA32(r15,7).r;
 b9=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 b9=JAMAICA_BLOCK_GET_DATA32(b9,3).r;
 r7=JAMAICA_BLOCK_GET_R(r15,1);
 r7=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n14=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_getChrData19,1).i;
 n14=((n14>>20) &  ((jamaica_int32)4095));
 n16=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n16=(n16&15);
 r16=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 r9=JAMAICA_BLOCK_GET_R(r16,1);
 r9=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n18=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_next3,1).i;
 n18=((n18>>20) &  ((jamaica_int32)4095));
 n20=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n20=(n20&15);
 if (n2!=0) { goto l17; }
 if (n6!=0) { goto l17; }
 if (n12!=0) { goto l17; }
 if (n16!=0) { goto l17; }
 if (n20!=0) { goto l17; }
l7:
 switch (n23) {
 case 1: goto l13;
 case 2: goto l13;
 case 3: goto l9;
 case 4: goto l8;
 case 5: goto l10;
 case 6: goto l13;
 case 7: goto l13;
 case 8: goto l12;
 case 9: goto l13;
 case 10: goto l13;
 case 11: goto l13;
 case 12: goto l11;
 case 13: goto l13;
 case 14: goto l13;
 case 15: goto l13;
 default: goto l12;
 }
l8:
 r17=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r12,n24,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_characters10);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,JAMAICA_NULL);
}
 goto l13;
l9:
 r17=JAMAICA_BLOCK_GET_DATA32(b3,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r3,n4,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r3,n8,r19);
{ jamaica_ref m=r19;
ct->calledMethod=m;
 r19=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_procection4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,r19,JAMAICA_NULL);
}
 goto l13;
l10:
 r17=JAMAICA_BLOCK_GET_DATA32(b6,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r5,n10,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_comment3);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,JAMAICA_NULL);
}
 goto l13;
l11:
 r17=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_startCDATA13);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,JAMAICA_NULL);
}
 r17=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r7,n14,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r15);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_characters10);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,JAMAICA_NULL);
}
 r17=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_endCDATA14);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,JAMAICA_NULL);
}
 goto l13;
l12:
 
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

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 r11=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r11==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r11=jam_comp_java_lang_Strinilder_140_append4(ct,r11,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_1174);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=jam_comp_java_lang_Strinilder_140_append13(ct,r11,n23);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=jam_comp_java_lang_Strinilder_140_toString20(ct,r11);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r11);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r0);
l13:
 JAMAICA_GET_REF_ARRAY_D0(r9,n18,r17);
{ jamaica_ref m=r17;
ct->calledMethod=m;
 n25=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16);
}
 n23=n25;
 if (n25==8) { goto l27; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l16; }
 jamaicaScheduler_syncPointFull(ct);
l16:
 if (n22!=0) { goto l7; } else { goto l27; }
l17:
 switch (n23) {
 case 1: goto l23;
 case 2: goto l23;
 case 3: goto l19;
 case 4: goto l18;
 case 5: goto l20;
 case 6: goto l23;
 case 7: goto l23;
 case 8: goto l22;
 case 9: goto l23;
 case 10: goto l23;
 case 11: goto l23;
 case 12: goto l21;
 case 13: goto l23;
 case 14: goto l23;
 case 15: goto l23;
 default: goto l22;
 }
l18:
 r17=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY(r12,n24,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_characters10);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,JAMAICA_NULL);
}
 goto l23;
l19:
 r17=JAMAICA_BLOCK_GET_DATA32(b3,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY(r3,n4,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY(r3,n8,r19);
{ jamaica_ref m=r19;
ct->calledMethod=m;
 r19=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_procection4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,r19,JAMAICA_NULL);
}
 goto l23;
l20:
 r17=JAMAICA_BLOCK_GET_DATA32(b6,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY(r5,n10,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_comment3);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,JAMAICA_NULL);
}
 goto l23;
l21:
 r17=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_startCDATA13);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,JAMAICA_NULL);
}
 r17=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 JAMAICA_GET_REF_ARRAY(r7,n14,r18);
{ jamaica_ref m=r18;
ct->calledMethod=m;
 r18=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r15);
}
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_characters10);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18,JAMAICA_NULL);
}
 r17=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_endCDATA14);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,JAMAICA_NULL);
}
 goto l23;
l22:
 
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

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 r11=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r11==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r11=jam_comp_java_lang_Strinilder_140_append4(ct,r11,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_1174);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=jam_comp_java_lang_Strinilder_140_append13(ct,r11,n23);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=jam_comp_java_lang_Strinilder_140_toString20(ct,r11);
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r11);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r0);
l23:
 JAMAICA_GET_REF_ARRAY(r9,n18,r17);
{ jamaica_ref m=r17;
ct->calledMethod=m;
 n25=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16);
}
 n23=n25;
 if (n25==8) { goto l27; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l26; }
 jamaicaScheduler_syncPointFull(ct);
l26:
 if (n22!=0) { goto l17; }
l27:
 
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

 if (n23!=8) { goto l29; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,0).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r0,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_endDoument15);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,JAMAICA_NULL);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-17;
 return 0;
l29:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-17;
 return 1;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_seekCrtTag23(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_seekCrtTag23;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_R(r2,1);
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipSpaces28,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n1=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n1=(n1&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_R(r2,1);
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i;
 n1=((n1>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if (n1!=62) { goto l4; }
 
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

 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,1).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n0,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return 1;
l4:
 if (n1!=47) { goto l8; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,62);
}
 if (n0!=0) { goto l7; }
 r2=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(r3,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r2,0,r3);
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11212,r2);
}
l7:
 
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

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,5).b[0] = (jamaica_int8) 1;
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return 1;
l8:
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_isValtChar23,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n2,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n1);
}
 if (n1==0) { goto l10; }
 if (n0!=0) { goto l11; }
l10:
 r1=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(r2,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r1,0,r2);
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11212,r1);
}
l11:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanEement27(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+9;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanEement27;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_R(r2,1);
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_popElement6,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n1=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n1=(n1&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r3=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(r2,5).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r4=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipString30,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n0,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,r2);
}
 if (n0!=0) { goto l4; }
 r5=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r5,0,r2);
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11237,r5);
}
l4:
 
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

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,1).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipSpaces28,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n0,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n0,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,62);
}
 if (n0!=0) { goto l6; }
 r2=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 JAMAICA_SET_REF_ARRAY_D0(ct,r2,0,r4);
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n0,r5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11238,r2);
}
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,4).i,1);
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,4).i,1);
 r2=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 n0=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,2).i,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n1&15);
 JAMAICA_GET_ARRAY32(r2,n0,n0);
 if (JAMAICA_BLOCK_GET_DATA32(b1,4).i>=n0) { goto l8; }
 r2=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r2,0,r4);
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11204,r2);
}
l8:
 
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

 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (r1==JAMAICA_NULL) { goto l10; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r1,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_endElement12);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r3,JAMAICA_NULL);
}
l10:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r1==JAMAICA_NULL) { goto l12; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_dtd_DTDGrrUtil_0_endElement2,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r3);
}
l12:
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-9;
 return JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,4).i;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+1;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
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
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,6).i = n0;
 ct->m.cli-=1;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_next2(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL;
 jamaica_int32 volatile n0=0,n1=0,n2=0,n3=0,n4=0;
 jamaica_ref volatile b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+11;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    while (1) {
  jamaica_ref ec=JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(ct->cT,3),1);
  switch(n0) {
  case 1: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l148; } else { n0=0; break; }
  case 2: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l149; } else { n0=0; break; }
  case 3: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l150; } else { n0=0; break; }
  case 4: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l151; } else { n0=0; break; }
  case 5: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l152; } else { n0=0; break; }
  case 6: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l153; } else { n0=0; break; }
  case 7: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l154; } else { n0=0; break; }
  case 8: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l155; } else { n0=0; break; }
  case 9: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l156; } else { n0=0; break; }
  case 10: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l157; } else { n0=0; break; }
  case 11: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l158; } else { n0=0; break; }
  case 12: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l159; } else { n0=0; break; }
  case 13: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l160; } else { n0=0; break; }
  case 14: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l161; } else { n0=0; break; }
  case 15: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l162; } else { n0=0; break; }
  case 16: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l163; } else { n0=0; break; }
  case 17: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l164; } else { n0=0; break; }
  case 18: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l165; } else { n0=0; break; }
  case 19: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l166; } else { n0=0; break; }
  case 20: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l167; } else { n0=0; break; }
  case 21: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l168; } else { n0=0; break; }
  case 22: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l169; } else { n0=0; break; }
  case 23: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l170; } else { n0=0; break; }
  case 24: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l171; } else { n0=0; break; }
  case 25: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l172; } else { n0=0; break; }
  case 26: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l173; } else { n0=0; break; }
  case 27: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l174; } else { n0=0; break; }
  case 28: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l175; } else { n0=0; break; }
  case 29: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_EOFExption_18)) { goto l176; } /* fall through */
  default: jamaica_propagate_exception(ct);
  }
  jamaicaScheduler_syncPoint(ct);
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_next2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=1;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 switch (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r,6).i) {
 case 21: goto l8;
 case 22: goto l3;
 default: goto l9;
 }
l3:
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_R(r3,1);
 r4=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i;
 n1=((n1>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (n1!=60) { goto l5; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,21);
 goto l8;
l5:
 if (n1!=38) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,28);
 goto l9;
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,37);
 goto l9;
l8:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_startarkup1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])==0) { goto l21; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r,5).b[3] = (jamaica_int8) 1;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,7).b[0])==0) { goto l15; }
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 if (n1==35) { goto l21; }
 if (n1==28) { goto l21; }
 if (n1==37) { goto l21; }
 JAMAICA_BLOCK_GET_DATA32(b0,7).b[0] = (jamaica_int8) 0;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l15:
 n0=2;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[2])!=0) { goto l17; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[3])==0) { goto l21; }
l17:
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 if (n1==35) { goto l21; }
 if (n1==28) { goto l21; }
 if (n1==37) { goto l21; }
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[2] = (jamaica_int8) 0;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[3] = (jamaica_int8) 0;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l21:
 n0=3;
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 switch (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r,6).i) {
 case 7: goto l22;
 case 8: goto l147;
 case 9: goto l147;
 case 10: goto l147;
 case 11: goto l147;
 case 12: goto l147;
 case 13: goto l147;
 case 14: goto l147;
 case 15: goto l147;
 case 16: goto l147;
 case 17: goto l147;
 case 18: goto l147;
 case 19: goto l147;
 case 20: goto l147;
 case 21: goto l147;
 case 22: goto l147;
 case 23: goto l97;
 case 24: goto l147;
 case 25: goto l147;
 case 26: goto l143;
 case 27: goto l96;
 case 28: goto l109;
 case 29: goto l147;
 case 30: goto l147;
 case 31: goto l147;
 case 32: goto l147;
 case 33: goto l147;
 case 34: goto l147;
 case 35: goto l98;
 case 36: goto l129;
 case 37: goto l27;
 case 38: goto l23;
 case 39: goto l86;
 case 40: goto l146;
 default: goto l147;
 }
l22:
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 7;
l23:
 n0=4;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanSement22,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,3).r,5).b[0] = (jamaica_int8) n1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r,5).b[0])==0) { goto l25; }
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,39);
 goto l26;
l25:
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
l26:
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 1;
l27:
 n0=5;
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 r3=r2;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[3])!=0) { goto l30; }
 r3=r2;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[2])!=0) { goto l30; }
 r3=r2;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,7).b[0])==0) { goto l31; }
l30:
 n1=1;
 goto l32;
l31:
 r3=r2;
 n1=0;
l32:
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,0).r,7).r,5).b[3] = (jamaica_int8) n1;
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])==0) { goto l37; }
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[3])!=0) { goto l36; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[2])!=0) { goto l36; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,7).b[0])==0) { goto l37; }
l36:
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,5).b[3] = (jamaica_int8) 0;
 JAMAICA_BLOCK_GET_DATA32(b1,5).b[2] = (jamaica_int8) 0;
 JAMAICA_BLOCK_GET_DATA32(b1,7).b[0] = (jamaica_int8) 1;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r,5).b[3] = (jamaica_int8) 1;
 goto l38;
l37:
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l38:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r4,5).i = 0;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_R(r3,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanCntent24,1).i;
 n1=((n1>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r4);
}
 n1=n2;
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n3=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n4=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n3,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n3=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,60);
}
 if (n3==0) { goto l51; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,47);
}
 if (n1==0) { goto l41; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b0,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,4).i,1);
 JAMAICA_BLOCK_GET_DATA32(b0,7).b[0] = (jamaica_int8) 0;
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,39);
 goto l45;
l41:
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 n1=jam_comp_com_sun_org_apache_xerces_internal_util_XMLChar_38_isNamStart11(ct,n1);
 if (n1==0) { goto l43; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b0,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,4).i,1);
 JAMAICA_BLOCK_GET_DATA32(b0,7).b[0] = (jamaica_int8) 0;
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,38);
 goto l45;
l43:
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r3,21);
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])==0) { goto l45; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r;
 JAMAICA_BLOCK_GET_DATA32(b1,5).b[3] = (jamaica_int8) 1;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,7).b[0] = (jamaica_int8) 1;
 r4=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,4).r);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r3,5).i = 0;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l45:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=6;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b1,7).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b1,5).b[3])==0) { goto l47; }
 r4=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,4).r);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,1).r,4).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r2,5).i = 0;
l47:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r3==JAMAICA_NULL) { goto l50; }
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_dtd_DTDGrrUtil_0_isIgnSpace10,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r2);
}
 if (n1==0) { goto l50; }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 6;
l50:
 n0=7;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l51:
 n0=8;
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r;
 JAMAICA_BLOCK_GET_DATA32(b1,5).b[3] = (jamaica_int8) 1;
 r4=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n3=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n4=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n3,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,4).r);
}
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b1,1).r,4).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r4,5).i = 0;
 if (n2!=13) { goto l53; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n2,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[3] = (jamaica_int8) 1;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n2,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,(n1&65535));
}
 n1=(-1);
 goto l62;
l53:
 if (n2!=93) { goto l62; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b1,0).r,7).r;
 JAMAICA_BLOCK_GET_DATA32(b1,5).b[3] = (jamaica_int8) 1;
 r4=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n2,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,(n1&65535));
}
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,93);
}
 if (n1==0) { goto l61; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,93);
}
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

l56:
 r4=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,1).r,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,93);
}
 if (n1==0) { goto l59; }
 r4=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,0).r,0).r,7).r,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,93);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l56; }
 jamaicaScheduler_syncPointFull(ct);
 goto l56;
l59:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,62);
}
 if (n1==0) { goto l61; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDoriver_1541,JAMAICA_NULL);
}
l61:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n1=(-1);
 if (JAMAICA_BLOCK_GET_DATA32(r0,3).r==JAMAICA_NULL) { goto LABEL_tNPE; }
l62:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

l63:
 if (n1!=60) { goto l66; }
 
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

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,21);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l80; }
 jamaicaScheduler_syncPointFull(ct);
 goto l80;
l66:
 if (n1!=38) { goto l69; }
 
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
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,28);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l80; }
 jamaicaScheduler_syncPointFull(ct);
 goto l80;
l69:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l71; }
 jamaicaScheduler_syncPointFull(ct);
l71:
 if (n1==(-1)) { goto l76; }
 r7=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_isInvteral20,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n2,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,n1);
}
 if (n2==0) { goto l76; }
 
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

 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_util_XMLChar_38_isHigogate4;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1);
}
 if (n2==0) { goto l75; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanSgates25,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 goto l80;
l75:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Integer_71,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Integer_71,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Integer_71_toString0;
ct->calledMethod=m;
 r5=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,16);
}
 JAMAICA_SET_REF_ARRAY_D0(ct,r3,0,r5);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
 
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
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDoriver_1545,r3);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 goto l80;
l76:
 r7=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,0).r,0).r,7).r,1).r;
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanCntent25,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r9,3).i&15);
 JAMAICA_GET_REF_ARRAY(r9,n1,r9);
{ jamaica_ref m=r9;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r8);
}
 r7=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l78; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

l78:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,0).r,2).r,5).b[3])!=0) { goto l63; }
 
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

 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r7,22);
l80:
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])==0) { goto l82; }
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,7).b[0] = (jamaica_int8) 1;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l82:
 n0=9;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r3==JAMAICA_NULL) { goto l85; }
 r2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_dtd_DTDGrrUtil_0_isIgnSpace10,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r2);
}
 if (n1==0) { goto l85; }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 6;
l85:
 n0=10;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l86:
 n0=11;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,3).r,5).b[0])==0) { goto l92; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,3).r,5).b[0] = (jamaica_int8) 0;
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r3,22);
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,3).r,4).i!=0) { goto l90; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_elemeoHook4,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if (n1==0) { goto l90; }
 n1=2;
 goto l91;
l90:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n1=2;
l91:
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l92:
 n0=12;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanEement27,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (n1!=0) { goto l95; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_elemeoHook4,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if (n1==0) { goto l95; }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 2;
l95:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=13;
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 2;
l96:
 n0=14;
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanCmment21,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 5;
l97:
 n0=15;
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanPI9,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 3;
l98:
 n0=16;
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])==0) { goto l103; }
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[3])!=0) { goto l102; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[2])!=0) { goto l102; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,7).b[0])==0) { goto l103; }
l102:
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[2] = (jamaica_int8) 1;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[3] = (jamaica_int8) 0;
 JAMAICA_BLOCK_GET_DATA32(b0,7).b[0] = (jamaica_int8) 0;
 goto l104;
l103:
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l104:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,0).r,7).r;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[3] = (jamaica_int8) 1;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanCction26,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,JAMAICA_BLOCK_GET_DATA32(b0,1).r,1);
}
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r3,22);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[3])==0) { goto l106; }
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,5).b[2] = (jamaica_int8) 1;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l106:
 n0=17;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,5).b[2])==0) { goto l108; }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 12;
l108:
 n0=18;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l109:
 n0=19;
 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,4).i,1);
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r,5).b[0] = (jamaica_int8) 0;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])==0) { goto l114; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b1,5).b[3])!=0) { goto l113; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b1,5).b[2])!=0) { goto l113; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b1,7).b[0])==0) { goto l114; }
l113:
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[3] = (jamaica_int8) 1;
 JAMAICA_BLOCK_GET_DATA32(b0,5).b[2] = (jamaica_int8) 0;
 JAMAICA_BLOCK_GET_DATA32(b0,7).b[0] = (jamaica_int8) 0;
 goto l115;
l114:
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l115:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,0).r,7).r,5).b[3] = (jamaica_int8) 1;
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,35);
}
 if (n1==0) { goto l118; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanCValue18,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,0).r,7).r,1).r,JAMAICA_NULL);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,4).i,1);
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])!=0) { goto l128; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l118:
 n0=20;
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanErence28,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,0).r,7).r,1).r);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,6).i!=41) { goto l121; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[3])!=0) { goto l121; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l121:
 n0=21;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 if (n1!=36) { goto l123; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,5).b[3] = (jamaica_int8) 1;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l123:
 n0=22;
 if (n1!=28) { goto l128; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r3,22);
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,5).b[0])==0) { goto l127; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_acces2400035;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_XMLEnorage_7_isDecntity9,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,r3);
}
 if (n1==0) { goto l127; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l127:
 
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

 n0=23;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 9;
l128:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=24;
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,3).r,5).b[3] = (jamaica_int8) 1;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l129:
 n0=25;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipString30,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDoriver_1562);
}
 if (n1==0) { goto l142; }
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,4).i,1);
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_isValeChar21,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n2,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,n1);
}
 if (n1==0) { goto l141; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,1).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,1).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append4,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDoriver_1566);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r2,3).b[3])==0) { goto l136; }
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l133:
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_isValCName22,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n2,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,n1);
}
 if (n1==0) { goto l140; }
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n2,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,(n1&65535));
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l133; }
 jamaicaScheduler_syncPointFull(ct);
 goto l133;
l136:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l137:
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,1).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_isValeChar21,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n2,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,n1);
}
 if (n1==0) { goto l140; }
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n2,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,(n1&65535));
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l137; }
 jamaicaScheduler_syncPointFull(ct);
 goto l137;
l140:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(r2,4).i;
 n2=JAMAICA_BLOCK_GET_DATA32(r2,5).i;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n3=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n4=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n3,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r4,n1,n2);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,1).r,7).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 r3=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanPIData20,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r2,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,0).r,1).r,7).r);
}
 goto l142;
l141:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_scanXtDecl16,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,1);
}
l142:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,7).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r,6).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,5).b[3] = (jamaica_int8) 1;
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,2).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_12_next0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return n1;
l143:
 n0=26;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_scanRtHook5,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if (n1==0) { goto l145; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r,5).b[0] = (jamaica_int8) 1;
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 1;
l145:
 n0=27;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 1;
l146:
 n0=28;
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanCValue18,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,0).r,7).r,1).r,JAMAICA_NULL);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b0,4).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b0,4).i,1);
 jam_comp_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_setScState30(ct,r2,22);
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return 4;
l147:
 n0=29;
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_com_sun_org_apache_xerces_internal_xni_XNIExption_10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r3=jam_comp_java_lang_Strinilder_140_append4(ct,r3,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDoriver_1584);
 r4=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,0).r,3).r,6).i;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=jam_comp_java_lang_Strinilder_140_append13(ct,r3,n1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=jam_comp_java_lang_Strinilder_140_append4(ct,r3,jam_str_com_sun_org_apache_xerces_internal_impl_XMLDoriver_1587);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=jam_comp_java_lang_Strinilder_140_toString20(ct,r3);
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_xni_XNIExption_10__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r3);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r2);
l148:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l149:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l150:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l151:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l152:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l153:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l154:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l155:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l156:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l157:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l158:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l159:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l160:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l161:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l162:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l163:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l164:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l165:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l166:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l167:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l168:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l169:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l170:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l171:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l172:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l173:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l174:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l175:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
 goto l177;
l176:
 
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

 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 r3=r2;
l177:
 n0=0;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoriver_15_endOfeHook6,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n1,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r3);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return (-1);
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b0,0).i!=JAMAICA_BLOCK_GET_DATA32(b0,1).i) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0,1);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b0,0).i;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 n1=(n1&15);
 JAMAICA_GET_ARRAYU16(r2,n0,n0);
 n1=n0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,6).b[2])==0) { goto l9; }
 if (n1==13) { goto l7; }
 n0=n1;
 goto l8;
l7:
 n0=10;
l8:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return n0;
l9:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return n0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b0,0).i!=JAMAICA_BLOCK_GET_DATA32(b0,1).i) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0,1);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b0,0).i;
 JAMAICA_BLOCK_GET_DATA32(b0,0).i = JAMAICA_ADDS32(n0,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 n1=(n1&15);
 JAMAICA_GET_ARRAYU16(r3,n0,n0);
 n1=n0;
 if (n0==10) { goto l7; }
 if (n0!=13) { goto l14; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,6).b[2])==0) { goto l14; }
l7:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b0,0).i!=JAMAICA_BLOCK_GET_DATA32(b0,1).i) { goto l9; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,7).r;
 n0=(n1&65535);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_SET_ARRAY16(r2,0,n0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1,0);
}
l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (n1!=13) { goto l14; }
 r1=r0;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,6).b[2])==0) { goto l14; }
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b0,0).i;
 JAMAICA_BLOCK_GET_DATA32(b0,0).i = JAMAICA_ADDS32(n0,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n1&15);
 JAMAICA_GET_ARRAYU16(r2,n0,n0);
 if (n0==10) { goto l13; }
 JAMAICA_BLOCK_GET_DATA32(b0,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b0,0).i,1);
l13:
 n1=10;
l14:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,3).i,1);
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return n1;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanName22(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0;
 jamaica_ref b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+11;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanName22;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,0).i!=JAMAICA_BLOCK_GET_DATA32(b1,1).i) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0,1);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n1=n0;
 r1=JAMAICA_BLOCK_GET_DATA32(b1,7).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_ARRAYU16(r1,n0,n0);
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 if (n0>=65536) { goto l7; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLChar_38_CHARS0,7).r,4).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAY8(r1,n0,n0);
 if ((n0&4)==0) { goto l7; }
 n0=1;
 goto l8;
l7:
 n0=0;
l8:
 if (n0==0) { goto l26; }
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 n0=JAMAICA_ADDS32(n0,1);
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = n0;
 if (n0!=JAMAICA_BLOCK_GET_DATA32(b1,1).i) { goto l12; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n2=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAYU16(r2,n1,n1);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r2,0,n1);
 n1=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1,0);
}
 if (n0==0) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 JAMAICA_BLOCK_GET_DATA32(b2,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b2,3).i,1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,2).r;
 r0=JAMAICA_BLOCK_GET_DATA32(b1,7).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r0,0,1);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return r0;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_VALIDNAMES4,7).r;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

l13:
 r5=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b2=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b2,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_ARRAYU16(r6,n0,n0);
 n2=n0;
 if (n0>=127) { goto l15; }
 r5=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(((n0>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n0&15);
 JAMAICA_GET_ARRAY8(r5,n2,n0);
 goto l16;
l15:
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_util_XMLChar_38_isName12;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n0);
}
l16:
 if (n0==0) { goto l26; }
 r5=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b2=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n0=JAMAICA_ADDS32(n0,1);
 JAMAICA_BLOCK_GET_DATA32(b2,0).i = n0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l19; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

l19:
 if (n0!=JAMAICA_BLOCK_GET_DATA32(b2,1).i) { goto l13; }
 n0=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n2=n1;
 n0=JAMAICA_SUBS32(n0,n2);
 n3=n0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n0);
}
 r5=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n0!=JAMAICA_BLOCK_GET_DATA32(r5,5).i) { goto l22; }
 r5=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r5,5).i;
 n0=JAMAICA_MULS32(n0,2);
 if ((n0<0)) { goto LABEL_tNASE; }
 r6=jamaicaInterpreter_allocSimpleArray(ct,n0,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,7).r,n1,r6,0,n3);
 r5=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,7).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,7).r=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,7).r=new_ref;}
#endif

 JAMAICA_BLOCK_GET_DATA32(r5,5).i = JAMAICA_MULS32(JAMAICA_BLOCK_GET_DATA32(r5,5).i,2);
 goto l23;
l22:
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,7).r;
 Jam_java_lang_System_arraycopy(ct,r5,n2,r5,0,n0);
l23:
 n1=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,n3,0);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l25; }
 jamaicaScheduler_syncPointFull(ct);
l25:
 if (n0==0) { goto l13; }
l26:
 
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

 r1=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,1).r;
 n2=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,n1);
 n0=n2;
 JAMAICA_BLOCK_GET_DATA32(b1,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,3).i,n2);
 if (n2<=0) { goto l28; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,7).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n2,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r0,n1,n0);
}
 goto l29;
l28:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_NULL;
l29:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return r0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return JAMAICA_NULL;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanQName23(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
 jamaica_ref b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+13;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanQName23;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,0).i!=JAMAICA_BLOCK_GET_DATA32(b1,1).i) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,0,1);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n1=n0;
 r2=JAMAICA_BLOCK_GET_DATA32(b1,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_ARRAYU16(r2,n0,n0);
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 if (n0>=65536) { goto l7; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLChar_38_CHARS0,7).r,4).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAY8(r2,n0,n0);
 if ((n0&4)==0) { goto l7; }
 n0=1;
 goto l8;
l7:
 n0=0;
l8:
 if (n0==0) { goto l36; }
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 n0=JAMAICA_ADDS32(n0,1);
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = n0;
 if (n0!=JAMAICA_BLOCK_GET_DATA32(b1,1).i) { goto l12; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,1);
}
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,7).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n2=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAYU16(r3,n1,n1);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r3,0,n1);
 n1=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,1,0);
}
 if (n0==0) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 JAMAICA_BLOCK_GET_DATA32(b2,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b2,3).i,1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,2).r;
 r0=JAMAICA_BLOCK_GET_DATA32(b1,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r0,0,1);
}
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_QName_2_setValues4,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,JAMAICA_NULL,r0,r0,JAMAICA_NULL);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return 1;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=(-1);
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_VALIDNAMES4,7).r;
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l13:
 r7=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 b2=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b2,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_GET_ARRAYU16(r8,n2,n2);
 n3=n2;
 if (n2>=127) { goto l15; }
 r7=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n4=(n2&15);
 JAMAICA_GET_ARRAY8(r7,n3,n2);
 goto l16;
l15:
 n4=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n4>>20) |  ((n4>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_util_XMLChar_38_isName12;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n2);
}
l16:
 if (n2==0) { goto l31; }
 if (n3!=58) { goto l20; }
 if (n0!=(-1)) { goto l31; }
 r7=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,1).r,0).i;
l20:
 r7=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 b2=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n2=JAMAICA_ADDS32(n2,1);
 JAMAICA_BLOCK_GET_DATA32(b2,0).i = n2;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l22; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

l22:
 if (n2!=JAMAICA_BLOCK_GET_DATA32(b2,1).i) { goto l13; }
 n2=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n3=n1;
 n2=JAMAICA_SUBS32(n2,n3);
 n4=n2;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,n2);
}
 r7=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n2!=JAMAICA_BLOCK_GET_DATA32(r7,5).i) { goto l25; }
 r7=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r7,5).i;
 n2=JAMAICA_MULS32(n2,2);
 if ((n2<0)) { goto LABEL_tNASE; }
 r8=jamaicaInterpreter_allocSimpleArray(ct,n2,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,7).r,n1,r8,0,n4);
 r7=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,7).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,7).r=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,7).r=new_ref;}
#endif

 JAMAICA_BLOCK_GET_DATA32(r7,5).i = JAMAICA_MULS32(JAMAICA_BLOCK_GET_DATA32(r7,5).i,2);
 goto l26;
l25:
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,7).r;
 Jam_java_lang_System_arraycopy(ct,r7,n3,r7,0,n2);
l26:
 n2=n0;
 if (n2==(-1)) { goto l28; }
 n0=JAMAICA_SUBS32(n2,n1);
l28:
 n1=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,n4,0);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l30; }
 jamaicaScheduler_syncPointFull(ct);
l30:
 if (n2==0) { goto l13; }
l31:
 
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
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 r3=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b2,0).i;
 n4=n1;
 n2=JAMAICA_SUBS32(n2,n4);
 n3=n2;
 JAMAICA_BLOCK_GET_DATA32(b2,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b2,3).i,n2);
 if (n2<=0) { goto l36; }
 r4=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b2,2).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b1,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_R(r2,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n5=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i;
 n5=((n5>>20) &  ((jamaica_int32)4095));
 n6=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n6=(n6&15);
 JAMAICA_GET_REF_ARRAY(r5,n5,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r3,n4,n2);
}
 r3=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (n0==(-1)) { goto l34; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 n2=JAMAICA_SUBS32(n0,n1);
 b1=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 r4=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n4=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n5=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n4,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r4,n1,n2);
}
 r4=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n1=JAMAICA_SUBS32(JAMAICA_SUBS32(n3,n2),1);
 r2=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n2,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r0,JAMAICA_ADDS32(n0,1),n1);
}
 goto l35;
l34:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=r2;
l35:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_QName_2_setValues4,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
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

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r4,r0,r3,JAMAICA_NULL);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return 1;
l36:
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return 0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanCntent24(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r4) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL;
 jamaica_int32 n2=0,n4=0,n5=0,n6=0,n7=0,n8=0;
 jamaica_ref b3=JAMAICA_NULL,b5=JAMAICA_NULL,b6=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+13;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanCntent24;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b5=JAMAICA_BLOCK_GET_DATA32(b5,1).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b5,0).i;
 n5=JAMAICA_BLOCK_GET_DATA32(b5,1).i;
 if (n4!=n5) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,0);
}
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,0,1);
}
 goto l6;
l4:
 if (n4!=JAMAICA_SUBS32(n5,1)) { goto l6; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,0);
}
 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b5,7).r;
 n4=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b5,1).r,1).i,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n6=((n5>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(n6))) { goto LABEL_tAIOOBE; }
 n5=(n5&15);
 JAMAICA_GET_ARRAYU16(r7,n4,n4);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n6))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r7,0,n4);
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,1).r,0).i = 0;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=r0;
 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b5,1).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b6,0).i;
 n5=n4;
 r6=JAMAICA_BLOCK_GET_DATA32(b5,7).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n7=((n6>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_GET_ARRAYU16(r6,n4,n4);
 n6=0;
 if (n4==10) { goto l9; }
 if (n4!=13) { goto l34; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,6).b[2])==0) { goto l34; }
l9:
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b5=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r8=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r9=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r10=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l10:
 r11=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 b6=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 r12=JAMAICA_BLOCK_GET_DATA32(b6,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b6,0).i;
 JAMAICA_BLOCK_GET_DATA32(b6,0).i = JAMAICA_ADDS32(n4,1);
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(((n7>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n8=(n7&15);
 JAMAICA_GET_ARRAYU16(r12,n4,n7);
 n4=n7;
 if (n7!=13) { goto l17; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b5,6).b[2])==0) { goto l17; }
 n4=n6;
 n4=JAMAICA_ADDS32(n4,1);
 n6=n4;
 JAMAICA_BLOCK_GET_DATA32(b6,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b6,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b6,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b6,0).i!=JAMAICA_BLOCK_GET_DATA32(b6,1).i) { goto l14; }
 n5=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,n4);
}
 r11=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r11,7).r,1).r,0).i = n4;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,n4,0);
}
 if (n4!=0) { goto l24; }
l14:
 r11=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 b6=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 r12=JAMAICA_BLOCK_GET_DATA32(b6,7).r;
 n4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b6,1).r,0).i;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(((n7>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n8=(n7&15);
 JAMAICA_GET_ARRAYU16(r12,n4,n4);
 if (n4!=10) { goto l16; }
 r11=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r11,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b6,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b6,0).i,1);
 n5=JAMAICA_ADDS32(n5,1);
 goto l21;
l16:
 n6=JAMAICA_ADDS32(n6,1);
 goto l21;
l17:
 if (n4!=10) { goto l20; }
 n4=n6;
 n4=JAMAICA_ADDS32(n4,1);
 n6=n4;
 r11=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r11,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b6,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b6,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b6,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b6,0).i!=JAMAICA_BLOCK_GET_DATA32(b6,1).i) { goto l21; }
 n5=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,n4);
}
 r11=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r11,7).r,1).r,0).i = n4;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,n4,0);
}
 if (n4==0) { goto l21; } else { goto l24; }
l20:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
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
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b5,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b5,0).i,1);
 goto l24;
l21:
 r11=JAMAICA_BLOCK_GET_DATA32(r10,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r11,7).r,1).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

l23:
 if (JAMAICA_BLOCK_GET_DATA32(b6,0).i<JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b6,1).i,1)) { goto l10; }
l24:
 
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

 n4=n5;
 r5=r0;
 b5=JAMAICA_NULL;
 b6=JAMAICA_NULL;
 n7=0;
 r8=JAMAICA_NULL;
 n2=0;
 n8=0;
 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r6==JAMAICA_NULL) { goto l26; }
 b5=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b5,1).r;
 n7=JAMAICA_BLOCK_GET_DATA32(b6,0).i;
l26:
 r9=r0;
 r7=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 if (r7==JAMAICA_NULL) { goto l29; }
 b3=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b3,7).r;
 if (r8==JAMAICA_NULL) { goto l29; }
 n8=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n2=((n8>>4) &  ((jamaica_int32)268435455));
 n8=(n8&15);
l29:
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n4>=n7) { goto l32; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r8,n4,10);
 n4=JAMAICA_ADDS32(n4,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l29; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l29;
l32:
 n4=n5;
 n8=JAMAICA_SUBS32(n7,n4);
 if (n7!=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b6,1).i,1)) { goto l34; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLString_9_setValues2,1).i>>20) &  ((jamaica_int32)4095));
 n6=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n5,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,JAMAICA_BLOCK_GET_DATA32(b5,7).r,n4,n8);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return (-1);
l34:
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b5=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLChar_38_CHARS0,7).r;
l35:
 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b6=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b3,0).i;
 if (n4>=JAMAICA_BLOCK_GET_DATA32(b3,1).i) { goto l46; }
 r7=JAMAICA_BLOCK_GET_DATA32(b6,7).r;
 JAMAICA_BLOCK_GET_DATA32(b3,0).i = JAMAICA_ADDS32(n4,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n8=((n7>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 n7=(n7&15);
 JAMAICA_GET_ARRAYU16(r7,n4,n4);
 n7=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n7>>20) |  ((n7>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 n7=n4;
 if (n4>=65536) { goto l38; }
 r6=JAMAICA_BLOCK_GET_DATA32(b5,4).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(((n8>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n8&15);
 JAMAICA_GET_ARRAY8(r6,n4,n4);
 if ((n4&32)!=0) { goto l40; }
l38:
 n4=n7;
 if (65536>n4) { goto l41; }
 if (n4>1114111) { goto l41; }
l40:
 n4=1;
 goto l42;
l41:
 n4=0;
l42:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l44; }
 jamaicaScheduler_syncPointFull(ct);
l44:
 if (n4!=0) { goto l35; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b5,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b5,0).i,1);
l46:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b5,1).r;
 n4=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b6,0).i,n5);
 JAMAICA_BLOCK_GET_DATA32(b6,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b6,3).i,JAMAICA_SUBS32(n4,n6));
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLString_9_setValues2,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n6,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,JAMAICA_BLOCK_GET_DATA32(b5,7).r,n5,n4);
}
 r5=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b5,0).i==JAMAICA_BLOCK_GET_DATA32(b5,1).i) { goto l50; }
 r5=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b5=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b5,7).r;
 n4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b5,1).r,0).i;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(((n5>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n6=(n5&15);
 JAMAICA_GET_ARRAYU16(r6,n4,n5);
 n4=n5;
 if (n5!=13) { goto l51; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,6).b[2])==0) { goto l51; }
 n4=10;
 goto l51;
l50:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n4=(-1);
l51:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return n4;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanLteral25(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_ref r5) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL;
 jamaica_int32 n3=0,n5=0,n6=0,n8=0,n9=0,n10=0,n11=0,n12=0,n13=0;
 jamaica_ref b1=JAMAICA_NULL,b4=JAMAICA_NULL,b7=JAMAICA_NULL,b10=JAMAICA_NULL,b11=JAMAICA_NULL,b12=JAMAICA_NULL,b13=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+13;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanLteral25;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r7=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b10=JAMAICA_BLOCK_GET_DATA32(b10,1).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b10,0).i;
 n9=JAMAICA_BLOCK_GET_DATA32(b10,1).i;
 if (n8!=n9) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,0);
}
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,0,1);
}
 goto l6;
l4:
 if (n8!=JAMAICA_SUBS32(n9,1)) { goto l6; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b10,7).r;
 n8=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b10,1).r,1).i,1);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n10=((n9>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n9=(n9&15);
 JAMAICA_GET_ARRAYU16(r8,n8,n8);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r8,0,n8);
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r,0).i = 0;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=r0;
 r7=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 n8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b10,1).r,0).i;
 n9=n8;
 r7=JAMAICA_BLOCK_GET_DATA32(b10,7).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n10=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n10>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n11=(n10&15);
 JAMAICA_GET_ARRAYU16(r7,n8,n8);
 n10=0;
 b10=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b10,6).b[0])==0) { goto l8; }
 JAMAICA_BLOCK_GET_DATA32(b10,5).i = 0;
l8:
 if (n8==10) { goto l11; }
 if (n8!=13) { goto l38; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,6).b[2])==0) { goto l38; }
l11:
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b10=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r8=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r9=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r10=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r11=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

l12:
 r12=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 b11=JAMAICA_BLOCK_GET_DATA32(r12,7).r;
 r13=JAMAICA_BLOCK_GET_DATA32(b11,7).r;
 b11=JAMAICA_BLOCK_GET_DATA32(b11,1).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b11,0).i;
 JAMAICA_BLOCK_GET_DATA32(b11,0).i = JAMAICA_ADDS32(n8,1);
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n11>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n12=(n11&15);
 JAMAICA_GET_ARRAYU16(r13,n8,n11);
 n8=n11;
 if (n11!=13) { goto l19; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b10,6).b[2])==0) { goto l19; }
 n8=n10;
 n8=JAMAICA_ADDS32(n8,1);
 n10=n8;
 JAMAICA_BLOCK_GET_DATA32(b11,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b11,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b11,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b11,0).i!=JAMAICA_BLOCK_GET_DATA32(b11,1).i) { goto l16; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,n8);
}
 n9=0;
 r12=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r,0).i = n8;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,n8,0);
}
 if (n8!=0) { goto l26; }
l16:
 r12=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 b11=JAMAICA_BLOCK_GET_DATA32(r12,7).r;
 r13=JAMAICA_BLOCK_GET_DATA32(b11,7).r;
 n8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b11,1).r,0).i;
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n11>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n12=(n11&15);
 JAMAICA_GET_ARRAYU16(r13,n8,n8);
 if (n8!=10) { goto l18; }
 r12=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 b11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b11,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b11,0).i,1);
 n9=JAMAICA_ADDS32(n9,1);
 goto l23;
l18:
 n10=JAMAICA_ADDS32(n10,1);
 goto l23;
l19:
 if (n8!=10) { goto l22; }
 n8=n10;
 n8=JAMAICA_ADDS32(n8,1);
 n10=n8;
 r12=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 b11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b11,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b11,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b11,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b11,0).i!=JAMAICA_BLOCK_GET_DATA32(b11,1).i) { goto l23; }
 n9=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r9,n8);
}
 r12=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r,0).i = n8;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r9,n8,0);
}
 if (n8==0) { goto l23; } else { goto l26; }
l22:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
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
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r10,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b10,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b10,0).i,1);
 goto l26;
l23:
 r12=JAMAICA_BLOCK_GET_DATA32(r11,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 b11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l25; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

l25:
 if (JAMAICA_BLOCK_GET_DATA32(b11,0).i<JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b11,1).i,1)) { goto l12; }
l26:
 
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

 n8=n9;
 r6=r0;
 b10=JAMAICA_NULL;
 b11=JAMAICA_NULL;
 n11=0;
 r9=JAMAICA_NULL;
 n3=0;
 n12=0;
 n6=0;
 n5=0;
 r7=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r7==JAMAICA_NULL) { goto l28; }
 b10=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b11=JAMAICA_BLOCK_GET_DATA32(b10,1).r;
 n11=JAMAICA_BLOCK_GET_DATA32(b11,0).i;
l28:
 r11=r0;
 r8=JAMAICA_BLOCK_GET_DATA32(r11,3).r;
 if (r8==JAMAICA_NULL) { goto l31; }
 b7=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 r9=JAMAICA_BLOCK_GET_DATA32(b7,7).r;
 if (r9==JAMAICA_NULL) { goto l31; }
 n12=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n3=((n12>>4) &  ((jamaica_int32)268435455));
 n12=(n12&15);
l31:
 b7=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 r10=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 if (r10==JAMAICA_NULL) { goto l33; }
 n5=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n6=((n5>>4) &  ((jamaica_int32)268435455));
 n5=(n5&15);
l33:
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n8>=n11) { goto l36; }
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r9,n8,10);
 n13=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = JAMAICA_ADDS32(n13,1);
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n6))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r10,n13,n8);
 n8=JAMAICA_ADDS32(n8,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l33; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l33;
l36:
 n8=n9;
 n12=JAMAICA_SUBS32(n11,n8);
 if (n11!=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b11,1).i,1)) { goto l38; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLString_9_setValues2,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n9,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,JAMAICA_BLOCK_GET_DATA32(b10,7).r,n8,n12);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return (-1);
l38:
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n11=n0;
 b10=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLChar_38_CHARS0,7).r;
 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r8=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b11=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 r9=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 b7=JAMAICA_BLOCK_GET_DATA32(r9,7).r;
 r10=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b4=JAMAICA_BLOCK_GET_DATA32(r10,7).r;
l39:
 r11=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 b12=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 b13=JAMAICA_BLOCK_GET_DATA32(b12,1).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b13,0).i;
 if (n8>=JAMAICA_BLOCK_GET_DATA32(b13,1).i) { goto l64; }
 r12=JAMAICA_BLOCK_GET_DATA32(b12,7).r;
 JAMAICA_BLOCK_GET_DATA32(b13,0).i = JAMAICA_ADDS32(n8,1);
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n12>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n12&15);
 JAMAICA_GET_ARRAYU16(r12,n8,n12);
 n8=n12;
 if (n12!=n11) { goto l43; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b12,5).b[0])==0) { goto l51; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b10,6).b[2])!=0) { goto l51; }
l43:
 n12=n8;
 if (n12==37) { goto l51; }
 n3=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n3>>20) |  ((n3>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 n3=n12;
 if (n12>=65536) { goto l46; }
 r11=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(((n5>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n6=(n5&15);
 JAMAICA_GET_ARRAY8(r11,n12,n12);
 if ((n12&32)!=0) { goto l48; }
l46:
 n12=n3;
 if (65536>n12) { goto l49; }
 if (n12>1114111) { goto l49; }
l48:
 n12=1;
 goto l50;
l49:
 n12=0;
l50:
 if (n12!=0) { goto l52; }
l51:
 
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
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b10,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b10,0).i,1);
 goto l64;
l52:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l54; }
 jamaicaScheduler_syncPointFull(ct);
l54:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b11,6).b[0])==0) { goto l39; }
 if (n8==32) { goto l59; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l58; }
 jamaicaScheduler_syncPointFull(ct);
l58:
 if (n8!=9) { goto l39; }
l59:
 r11=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n8=((n8>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_BLOCK_GET_DATA32(b7,5).i>=n8) { goto l62; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r11=JAMAICA_BLOCK_GET_DATA32(b4,4).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b4,5).i;
 JAMAICA_BLOCK_GET_DATA32(b4,5).i = JAMAICA_ADDS32(n8,1);
 r12=JAMAICA_BLOCK_GET_DATA32(r10,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r,0).i,1);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n3&15);
 JAMAICA_SET_ARRAY32(r11,n8,n12);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l39; }
 jamaicaScheduler_syncPointFull(ct);
 goto l39;
l62:
 n12=JAMAICA_MULS32(n8,2);
 if ((n12<0)) { goto LABEL_tNASE; }
 r12=jamaicaInterpreter_allocSimpleArray(ct,n12,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r11,0,r12,0,n8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b7,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b7,4).r=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b7,4).r=new_ref;}
#endif

 r11=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = JAMAICA_ADDS32(n8,1);
 r12=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r12,7).r,1).r,0).i,1);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n3&15);
 JAMAICA_SET_ARRAY32(r11,n8,n12);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l39; }
 jamaicaScheduler_syncPointFull(ct);
 goto l39;
l64:
 
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

 r6=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b11=JAMAICA_BLOCK_GET_DATA32(b10,1).r;
 n8=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b11,0).i,n9);
 JAMAICA_BLOCK_GET_DATA32(b11,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b11,3).i,JAMAICA_SUBS32(n8,n10));
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n10=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLString_9_setValues2,1).i>>20) &  ((jamaica_int32)4095));
 n11=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n10,r7);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,JAMAICA_BLOCK_GET_DATA32(b10,7).r,n9,n8);
}
 r6=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b10,0).i==JAMAICA_BLOCK_GET_DATA32(b10,1).i) { goto l68; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 b10=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b10,7).r;
 n8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b10,1).r,0).i;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n9>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n10=(n9&15);
 JAMAICA_GET_ARRAYU16(r6,n8,n9);
 n8=n9;
 if (n9!=n0) { goto l69; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b10,5).b[0])==0) { goto l69; }
 n8=(-1);
 goto l69;
l68:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n8=(-1);
l69:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return n8;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanData26(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r6,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r4=JAMAICA_NULL,r8=JAMAICA_NULL,r10=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL,r18=JAMAICA_NULL,r21=JAMAICA_NULL,r22=JAMAICA_NULL,r23=JAMAICA_NULL,r24=JAMAICA_NULL,r25=JAMAICA_NULL,r26=JAMAICA_NULL,r27=JAMAICA_NULL,r28=JAMAICA_NULL,r29=JAMAICA_NULL,r30=JAMAICA_NULL,r31=JAMAICA_NULL,r32=JAMAICA_NULL,r33=JAMAICA_NULL,r34=JAMAICA_NULL,r35=JAMAICA_NULL,r36=JAMAICA_NULL,r37=JAMAICA_NULL,r38=JAMAICA_NULL,r39=JAMAICA_NULL,r40=JAMAICA_NULL,r41=JAMAICA_NULL,r42=JAMAICA_NULL,r43=JAMAICA_NULL,r44=JAMAICA_NULL,r45=JAMAICA_NULL,r46=JAMAICA_NULL,r47=JAMAICA_NULL;
 jamaica_int32 n33=0,n0=0,n44=0,n47=0,n1=0,n3=0,n5=0,n7=0,n11=0,n12=0,n14=0,n16=0,n18=0,n20=0,n25=0,n27=0,n28=0,n31=0,n34=0,n35=0,n36=0,n37=0,n38=0,n39=0,n40=0,n41=0,n42=0,n43=0,n45=0,n46=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL,b7=JAMAICA_NULL,b8=JAMAICA_NULL,b10=JAMAICA_NULL,b12=JAMAICA_NULL,b14=JAMAICA_NULL,b17=JAMAICA_NULL,b18=JAMAICA_NULL,b19=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+43;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanData26;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n33=0;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n34=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n35=((n34>>4) &  ((jamaica_int32)268435455));
 n0=n35;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n35))) { jamaica_throwStringIdxOutOfBndsExc(ct,0,0,n35-1);return 0; }
 n34=(n34&15);
 JAMAICA_GET_ARRAYU16(r6,0,n34);
 r22=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r23=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r23;}
#else
{jamaica_ref new_ref=r23;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n35=n0;
 r24=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n36=n0;
 r25=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r25;}
#else
{jamaica_ref new_ref=r25;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r26=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r26;}
#else
{jamaica_ref new_ref=r26;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 r2=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n1=0;
 n3=0;
 r4=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n5=0;
 n7=0;
 n11=0;
 n12=0;
 r8=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n14=0;
 n16=0;
 r10=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n18=0;
 n20=0;
 if (r26==JAMAICA_NULL) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_R(r26,1);
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n1=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append5,1).i;
 n1=((n1>>20) &  ((jamaica_int32)4095));
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n3=(n3&15);
l4:
 b0=JAMAICA_BLOCK_GET_DATA32(r24,7).r;
 r27=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r27;}
#else
{jamaica_ref new_ref=r27;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 b1=JAMAICA_BLOCK_GET_DATA32(r27,7).r;
 r28=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 r29=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 r30=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 r31=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r31;}
#else
{jamaica_ref new_ref=r31;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 r32=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r32;}
#else
{jamaica_ref new_ref=r32;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 r33=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r33;}
#else
{jamaica_ref new_ref=r33;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 r34=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r34;}
#else
{jamaica_ref new_ref=r34;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 r35=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r35;}
#else
{jamaica_ref new_ref=r35;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 if (r35==JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_R(r35,1);
 r4=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n5=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append5,1).i;
 n5=((n5>>20) &  ((jamaica_int32)4095));
 n7=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n7=(n7&15);
l6:
 r36=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r36;}
#else
{jamaica_ref new_ref=r36;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 n37=n34;
 r37=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r37;}
#else
{jamaica_ref new_ref=r37;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 n38=n0;
 r38=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r38;}
#else
{jamaica_ref new_ref=r38;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 r39=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r39;}
#else
{jamaica_ref new_ref=r39;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 r40=r6;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r40;}
#else
{jamaica_ref new_ref=r40;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 if (r40==JAMAICA_NULL) { goto l8; }
 n34=JAMAICA_BLOCK_GET_DATA32(r40,3).i;
 n11=((n34>>4) &  ((jamaica_int32)268435455));
 n12=(n34&15);
l8:
 r41=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r41;}
#else
{jamaica_ref new_ref=r41;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 r42=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 n39=n0;
 b2=JAMAICA_BLOCK_GET_DATA32(r36,7).r;
 r43=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[28]=new_ref;}
#endif

 r44=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[29]=new_ref;}
#endif

 r45=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[30]=new_ref;}
#endif

 if (r45==JAMAICA_NULL) { goto l10; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_R(r45,1);
 r8=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n34=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append5,1).i;
 n14=((n34>>20) &  ((jamaica_int32)4095));
 n34=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n16=(n34&15);
l10:
 r46=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[31]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_R(r1,1);
 r10=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n34=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append5,1).i;
 n18=((n34>>20) &  ((jamaica_int32)4095));
 n34=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n20=(n34&15);
l12:
 r6=JAMAICA_BLOCK_GET_DATA32(r22,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b18,0).i!=JAMAICA_BLOCK_GET_DATA32(b18,1).i) { goto l14; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n34=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,0,1);
}
l14:
 n34=0;
l15:
 r6=JAMAICA_BLOCK_GET_DATA32(r23,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b19=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
 n40=JAMAICA_BLOCK_GET_DATA32(b19,0).i;
 n41=JAMAICA_BLOCK_GET_DATA32(b19,1).i;
 if (n40<=JAMAICA_SUBS32(n41,n35)) { goto l19; }
 if (n34!=0) { goto l19; }
 r6=JAMAICA_BLOCK_GET_DATA32(b18,7).r;
 Jam_java_lang_System_arraycopy(ct,r6,n40,r6,0,JAMAICA_SUBS32(n41,n40));
 r6=JAMAICA_BLOCK_GET_DATA32(r23,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 n34=JAMAICA_BLOCK_GET_DATA32(b18,1).i;
 n40=JAMAICA_BLOCK_GET_DATA32(b18,0).i;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n34=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,JAMAICA_SUBS32(n34,n40),0);
}
 r6=JAMAICA_BLOCK_GET_DATA32(r23,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b18,1).r,0).i = 0;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b18,0).r,4).i = 0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l15; }
 jamaicaScheduler_syncPointFull(ct);
 goto l15;
l19:
 r6=JAMAICA_BLOCK_GET_DATA32(r24,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b19=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
 n34=JAMAICA_BLOCK_GET_DATA32(b19,0).i;
 if (n34<=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b19,1).i,n36)) { goto l21; }
 
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
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
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

 r6=JAMAICA_BLOCK_GET_DATA32(r25,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n33=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 n34=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,1).i,n33);
 if (r26==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r2,n1,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,JAMAICA_BLOCK_GET_DATA32(b0,7).r,n33,n34);
}
 r6=JAMAICA_BLOCK_GET_DATA32(r25,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n33=JAMAICA_BLOCK_GET_DATA32(b1,1).i;
 JAMAICA_BLOCK_GET_DATA32(b1,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,3).i,n33);
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 JAMAICA_BLOCK_GET_DATA32(b1,7).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,7).i,JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,JAMAICA_BLOCK_GET_DATA32(b0,4).i));
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = n33;
 JAMAICA_BLOCK_GET_DATA32(b0,4).i = n33;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n33=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r25,0,1);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-43;
 return 0;
l21:
 n40=n34;
 r6=JAMAICA_BLOCK_GET_DATA32(b18,7).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n41=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n42=((n41>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n34))>=((jamaica_uint32)(n42))) { goto LABEL_tAIOOBE; }
 n41=(n41&15);
 JAMAICA_GET_ARRAYU16(r6,n34,n34);
 n41=0;
 if (n34==10) { goto l24; }
 if (n34!=13) { goto l48; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,6).b[2])==0) { goto l48; }
l24:
 r6=JAMAICA_BLOCK_GET_DATA32(r27,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r47=JAMAICA_BLOCK_GET_DATA32(b18,7).r;
 b18=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
 n34=JAMAICA_BLOCK_GET_DATA32(b18,0).i;
 JAMAICA_BLOCK_GET_DATA32(b18,0).i = JAMAICA_ADDS32(n34,1);
 if (r47==JAMAICA_NULL) { goto LABEL_tNPE; }
 n42=JAMAICA_BLOCK_GET_DATA32(r47,3).i;
 if (((jamaica_uint32)(n34))>=((jamaica_uint32)(((n42>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n43=(n42&15);
 JAMAICA_GET_ARRAYU16(r47,n34,n42);
 n34=n42;
 if (n42!=13) { goto l31; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b1,6).b[2])==0) { goto l31; }
 n34=n41;
 n34=JAMAICA_ADDS32(n34,1);
 n41=n34;
 JAMAICA_BLOCK_GET_DATA32(b18,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b18,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b18,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b18,0).i!=JAMAICA_BLOCK_GET_DATA32(b18,1).i) { goto l28; }
 n40=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r27,n34);
}
 r6=JAMAICA_BLOCK_GET_DATA32(r27,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r,0).i = n34;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n34=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r27,n34,0);
}
 if (n34!=0) { goto l38; }
l28:
 r6=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r47=JAMAICA_BLOCK_GET_DATA32(b18,7).r;
 n34=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b18,1).r,0).i;
 if (r47==JAMAICA_NULL) { goto LABEL_tNPE; }
 n42=JAMAICA_BLOCK_GET_DATA32(r47,3).i;
 if (((jamaica_uint32)(n34))>=((jamaica_uint32)(((n42>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n43=(n42&15);
 JAMAICA_GET_ARRAYU16(r47,n34,n34);
 if (n34!=10) { goto l30; }
 r6=JAMAICA_BLOCK_GET_DATA32(r29,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b18,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b18,0).i,1);
 n40=JAMAICA_ADDS32(n40,1);
 goto l35;
l30:
 n41=JAMAICA_ADDS32(n41,1);
 goto l35;
l31:
 if (n34!=10) { goto l34; }
 n34=n41;
 n34=JAMAICA_ADDS32(n34,1);
 n41=n34;
 r6=JAMAICA_BLOCK_GET_DATA32(r30,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b18,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b18,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b18,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b18,0).i!=JAMAICA_BLOCK_GET_DATA32(b18,1).i) { goto l35; }
 n40=0;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r30,n34);
}
 r6=JAMAICA_BLOCK_GET_DATA32(r30,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b18,0).i = n34;
 JAMAICA_BLOCK_GET_DATA32(b18,1).i = n34;
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n34=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r30,n34,0);
}
 if (n34==0) { goto l35; } else { goto l38; }
l34:
 r6=JAMAICA_BLOCK_GET_DATA32(r31,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b18,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b18,0).i,1);
 goto l38;
l35:
 r6=JAMAICA_BLOCK_GET_DATA32(r32,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l37; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l37:
 if (JAMAICA_BLOCK_GET_DATA32(b18,0).i<JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b18,1).i,1)) { goto l24; }
l38:
 n34=n40;
 b18=JAMAICA_NULL;
 b19=JAMAICA_NULL;
 n42=0;
 r21=JAMAICA_NULL;
 n31=0;
 n43=0;
 r6=JAMAICA_BLOCK_GET_DATA32(r33,3).r;
 if (r6==JAMAICA_NULL) { goto l40; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b19=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
 n42=JAMAICA_BLOCK_GET_DATA32(b19,0).i;
l40:
 r47=JAMAICA_BLOCK_GET_DATA32(r34,3).r;
 if (r47==JAMAICA_NULL) { goto l43; }
 b17=JAMAICA_BLOCK_GET_DATA32(r47,7).r;
 r21=JAMAICA_BLOCK_GET_DATA32(b17,7).r;
 if (r21==JAMAICA_NULL) { goto l43; }
 n43=JAMAICA_BLOCK_GET_DATA32(r21,3).i;
 n31=((n43>>4) &  ((jamaica_int32)268435455));
 n43=(n43&15);
l43:
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n34>=n42) { goto l46; }
 if (r47==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r21==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n34))>=((jamaica_uint32)(n31))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY16(r21,n34,10);
 n34=JAMAICA_ADDS32(n34,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l43; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=JAMAICA_NULL;}
#else
{l[32]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l43;
l46:
 n34=n40;
 n43=JAMAICA_SUBS32(n42,n34);
 if (n42!=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b19,1).i,1)) { goto l48; }
 
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

 if (r35==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r4,n5,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r35,JAMAICA_BLOCK_GET_DATA32(b18,7).r,n34,n43);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-43;
 return 1;
l48:
 b19=JAMAICA_NULL;
 n42=0;
 r47=JAMAICA_NULL;
 n43=0;
 n31=0;
 b17=JAMAICA_NULL;
 b7=JAMAICA_NULL;
 b8=JAMAICA_NULL;
 n25=0;
 b10=JAMAICA_NULL;
 r16=JAMAICA_NULL;
 n27=0;
 n28=0;
 b12=JAMAICA_NULL;
 b14=JAMAICA_NULL;
 r6=JAMAICA_BLOCK_GET_DATA32(r36,3).r;
 if (r6==JAMAICA_NULL) { goto l51; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b19=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
 n42=JAMAICA_BLOCK_GET_DATA32(b19,1).i;
 r47=JAMAICA_BLOCK_GET_DATA32(b18,7).r;
 if (r47==JAMAICA_NULL) { goto l51; }
 n34=JAMAICA_BLOCK_GET_DATA32(r47,3).i;
 n43=((n34>>4) &  ((jamaica_int32)268435455));
 n31=(n34&15);
l51:
 r21=JAMAICA_BLOCK_GET_DATA32(r37,3).r;
 if (r21==JAMAICA_NULL) { goto l53; }
 b18=JAMAICA_BLOCK_GET_DATA32(r21,7).r;
 b17=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
l53:
 r14=JAMAICA_BLOCK_GET_DATA32(r38,3).r;
 if (r14==JAMAICA_NULL) { goto l55; }
 b7=JAMAICA_BLOCK_GET_DATA32(r14,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 n25=JAMAICA_BLOCK_GET_DATA32(b8,1).i;
l55:
 r15=JAMAICA_BLOCK_GET_DATA32(r39,3).r;
 if (r15==JAMAICA_NULL) { goto l57; }
 b18=JAMAICA_BLOCK_GET_DATA32(r15,7).r;
 b10=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
l57:
 if (r14==JAMAICA_NULL) { goto l60; }
 r16=JAMAICA_BLOCK_GET_DATA32(b7,7).r;
 if (r16==JAMAICA_NULL) { goto l60; }
 n34=JAMAICA_BLOCK_GET_DATA32(r16,3).i;
 n27=((n34>>4) &  ((jamaica_int32)268435455));
 n28=(n34&15);
l60:
 r17=JAMAICA_BLOCK_GET_DATA32(r41,3).r;
 if (r17==JAMAICA_NULL) { goto l62; }
 b18=JAMAICA_BLOCK_GET_DATA32(r17,7).r;
 b12=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
l62:
 r18=JAMAICA_BLOCK_GET_DATA32(r42,3).r;
 if (r18==JAMAICA_NULL) { goto l64; }
 b18=JAMAICA_BLOCK_GET_DATA32(r18,7).r;
 b14=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
l64:
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n34=JAMAICA_BLOCK_GET_DATA32(b19,0).i;
 if (n34>=n42) { goto l98; }
 JAMAICA_BLOCK_GET_DATA32(b19,0).i = JAMAICA_ADDS32(n34,1);
 if (r47==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n34))>=((jamaica_uint32)(n43))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAYU16(r47,n34,n44);
 n34=n44;
 if (n44!=n37) { goto l90; }
 if (r21==JAMAICA_NULL) { goto LABEL_tNPE; }
 n34=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b17,0).i,1);
 n44=1;
 if (r14==JAMAICA_NULL) { goto l78; }
 if (r15==JAMAICA_NULL) { goto l78; }
 if (r16==JAMAICA_NULL) { goto l78; }
 if (r40==JAMAICA_NULL) { goto l78; }
 if (r17==JAMAICA_NULL) { goto l78; }
l71:
 n45=n44;
 if (n45>=n38) { goto l86; }
 n46=JAMAICA_BLOCK_GET_DATA32(b8,0).i;
 if (n46!=n25) { goto l74; }
 JAMAICA_BLOCK_GET_DATA32(b10,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b10,0).i,n44);
 goto l98;
l74:
 JAMAICA_BLOCK_GET_DATA32(b8,0).i = JAMAICA_ADDS32(n46,1);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAYU16(r16,n46,n46);
 if (((jamaica_uint32)(n45))>=((jamaica_uint32)(n11))) { jamaica_throwStringIdxOutOfBndsExc(ct,n45,0,n11-1);return 0; }
 JAMAICA_GET_ARRAYU16(r40,n45,n47);
 if (n47==n46) { goto l76; }
 JAMAICA_BLOCK_GET_DATA32(b12,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b12,0).i,n44);
 goto l86;
l76:
 n44=JAMAICA_ADDS32(n45,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l71; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l71;
l78:
 n45=n44;
 if (n45>=n38) { goto l86; }
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 n46=JAMAICA_BLOCK_GET_DATA32(b8,0).i;
 if (n46!=n25) { goto l81; }
 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(b10,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b10,0).i,n44);
 goto l98;
l81:
 JAMAICA_BLOCK_GET_DATA32(b8,0).i = JAMAICA_ADDS32(n46,1);
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAYU16(r16,n46,n46);
 if (r40==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n45))>=((jamaica_uint32)(n11))) { jamaica_throwStringIdxOutOfBndsExc(ct,n45,0,n11-1);return 0; }
 JAMAICA_GET_ARRAYU16(r40,n45,n47);
 if (n47==n46) { goto l84; }
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(b12,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b12,0).i,n44);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l86; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l86;
l84:
 n44=JAMAICA_ADDS32(n45,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l78; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l78;
l86:
 if (r18==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l88; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l88:
 if (JAMAICA_BLOCK_GET_DATA32(b14,0).i!=JAMAICA_ADDS32(n34,n39)) { goto l64; }
 n33=1;
 goto l98;
l90:
 if (n44==10) { goto l93; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b2,6).b[2])==0) { goto l94; }
 if (n44!=13) { goto l94; }
l93:
 r6=JAMAICA_BLOCK_GET_DATA32(r43,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b18,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b18,0).i,1);
 goto l98;
l94:
 n42=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n42>>20) |  ((n42>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_util_XMLChar_38_isInvalid7;
ct->calledMethod=m;
 n34=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n34);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l96; }
 jamaicaScheduler_syncPointFull(ct);
l96:
 if (n34==0) { goto l48; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=JAMAICA_NULL;}
#else
{l[31]=JAMAICA_NULL;}
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
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=JAMAICA_NULL;}
#else
{l[29]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r44,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,1);
 n33=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,n40);
 JAMAICA_BLOCK_GET_DATA32(b1,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,3).i,JAMAICA_SUBS32(n33,n41));
 if (r45==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r8,n14,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=JAMAICA_NULL;}
#else
{l[30]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r45,JAMAICA_BLOCK_GET_DATA32(b0,7).r,n40,n33);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-43;
 return 1;
l98:
 r6=JAMAICA_BLOCK_GET_DATA32(r46,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b18=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b18=JAMAICA_BLOCK_GET_DATA32(b18,1).r;
 n34=JAMAICA_BLOCK_GET_DATA32(b18,0).i;
 n42=n40;
 n42=JAMAICA_SUBS32(n34,n42);
 n34=n42;
 JAMAICA_BLOCK_GET_DATA32(b18,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b18,3).i,JAMAICA_SUBS32(n42,n41));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l100; }
 jamaicaScheduler_syncPointFull(ct);
l100:
 if (n33==0) { goto l102; }
 n34=JAMAICA_SUBS32(n42,n0);
l102:
 r6=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r10,n18,r47);
{ jamaica_ref m=r47;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,7).r,n40,n34);
}
 n34=n33;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l104; }
 jamaicaScheduler_syncPointFull(ct);
l104:
 if (n34==0) { goto l12; }
 
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
 ct->m.cli=tp-43;
 return (!(n34));
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n1=0,n2=0,n3=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b0,0).i!=JAMAICA_BLOCK_GET_DATA32(b0,1).i) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0,1);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,0).i;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_ARRAYU16(r3,n1,n2);
 n3=n0;
 if (n2!=n3) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,0).i,1);
 if (n0!=10) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = 1;
 goto l8;
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,3).i,1);
l8:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return 1;
l9:
 if (n3!=10) { goto l17; }
 if (n2!=13) { goto l17; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,6).b[2])==0) { goto l17; }
 if (n1!=JAMAICA_BLOCK_GET_DATA32(b0,1).i) { goto l14; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1);
}
 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,7).r;
 n1=(n2&65535);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_SET_ARRAY16(r2,0,n1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,1,0);
}
l14:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,1);
 r2=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAYU16(r2,n1,n2);
 if (n2!=10) { goto l16; }
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n1,1);
l16:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = 1;
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return 1;
l17:
 
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
 return 0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipSpaces28(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0;
 jamaica_ref b1=JAMAICA_NULL,b2=JAMAICA_NULL,b3=JAMAICA_NULL,b4=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+12;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipSpaces28;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b3,0).i!=JAMAICA_BLOCK_GET_DATA32(b3,1).i) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,0,1);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r1!=JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-12;
 return 0;
l6:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b3=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b3,7).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b3,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b3,0).i;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 n1=(n1&15);
 JAMAICA_GET_ARRAYU16(r2,n0,n0);
 n1=n0;
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 if (n0>32) { goto l9; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLChar_38_CHARS0,7).r,4).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAY8(r1,n0,n0);
 if ((n0&2)==0) { goto l9; }
 n0=1;
 goto l10;
l9:
 n0=0;
l10:
 if (n0==0) { goto l38; }
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b3=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 b1=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLChar_38_CHARS0,7).r;
l12:
 n0=0;
 n2=n1;
 if (n2==10) { goto l15; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b3,6).b[2])==0) { goto l24; }
 if (n2!=13) { goto l24; }
l15:
 r8=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r8,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b4,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b4,2).i,1);
 JAMAICA_BLOCK_GET_DATA32(b4,3).i = 1;
 if (JAMAICA_BLOCK_GET_DATA32(b4,0).i!=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b4,1).i,1)) { goto l20; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,0);
}
 r8=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r8,7).r,7).r;
 n0=(n1&65535);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_SET_ARRAY16(r8,0,n0);
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,1,1);
}
 n0=n2;
 if (n2!=0) { goto l18; }
 r8=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r8,7).r,1).r,0).i = 0;
 goto l20;
l18:
 if (JAMAICA_BLOCK_GET_DATA32(r2,3).r!=JAMAICA_NULL) { goto l20; }
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-12;
 return 1;
l20:
 if (n1!=13) { goto l25; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b1,6).b[2])==0) { goto l25; }
 r8=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b4=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 r9=JAMAICA_BLOCK_GET_DATA32(b4,7).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b4,1).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b4,0).i;
 n1=JAMAICA_ADDS32(n1,1);
 JAMAICA_BLOCK_GET_DATA32(b4,0).i = n1;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAYU16(r9,n1,n1);
 if (n1==10) { goto l25; }
 JAMAICA_BLOCK_GET_DATA32(b4,0).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b4,0).i,1);
 goto l25;
l24:
 r8=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r8,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b4,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b4,3).i,1);
l25:
 if (n0!=0) { goto l27; }
 r8=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r8,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b4,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b4,0).i,1);
l27:
 r8=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r8,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b4,0).i!=JAMAICA_BLOCK_GET_DATA32(b4,1).i) { goto l30; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_invokeners35;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,0);
}
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_load32;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,0,1);
}
 if (JAMAICA_BLOCK_GET_DATA32(r7,3).r!=JAMAICA_NULL) { goto l30; }
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-12;
 return 1;
l30:
 r8=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b4=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 r9=JAMAICA_BLOCK_GET_DATA32(b4,7).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b4,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b4,0).i;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 n1=(n1&15);
 JAMAICA_GET_ARRAYU16(r9,n0,n0);
 n1=n0;
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
 if (n0>32) { goto l33; }
 r8=JAMAICA_BLOCK_GET_DATA32(b2,4).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAY8(r8,n0,n0);
 if ((n0&2)==0) { goto l33; }
 n0=1;
 goto l34;
l33:
 n0=0;
l34:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l36; }
 jamaicaScheduler_syncPointFull(ct);
l36:
 if (n0!=0) { goto l12; }
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-12;
 return 1;
l38:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-12;
 return 0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipString30(jamaica_thread *ct,jamaica_ref r1,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n8=0,n0=0,n1=0,n3=0,n4=0,n7=0,n9=0,n10=0,n11=0,n12=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+4;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
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
 r4=r0;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n7=((n7>>4) &  ((jamaica_int32)268435455));
 n8=n7;
 r4=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_arranacity29,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n9,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,n7,0);
}
 if (n9==0) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,1).r,0).i;
 n10=n9;
 n9=JAMAICA_SUBS32(JAMAICA_ADDS32(n9,n7),1);
 n7=JAMAICA_SUBS32(n7,1);
 n1=0;
 n0=0;
 b0=JAMAICA_NULL;
 r5=JAMAICA_NULL;
 n4=0;
 n3=0;
 if (r0==JAMAICA_NULL) { goto l5; }
 n0=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 n0=(n0&15);
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 if (r4==JAMAICA_NULL) { goto l11; }
 b0=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 r5=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l8; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l8:
 if (r5==JAMAICA_NULL) { goto l11; }
 n3=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 n3=(n3&15);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l11; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l11:
 n11=n7;
 n7=JAMAICA_ADDS32(n11,(-1));
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n1))) { jamaica_throwStringIdxOutOfBndsExc(ct,n11,0,n1-1);return 0; }
 JAMAICA_GET_ARRAYU16(r0,n11,n11);
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=n9;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAYU16(r5,n12,n9);
 if (n11!=n9) { goto l16; }
 n9=JAMAICA_ADDS32(n12,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l14:
 if (n12!=n10) { goto l11; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,0).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,0).i,n8);
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,3).i,n8);
 ct->m.cli-=4;
 return 1;
l16:
 
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

 ct->m.cli-=4;
 return 0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_next2(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n0=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+5;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_next2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,1).i!=2) { goto l5; }
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,4).r,4).b[0])==0) { goto l5; }
 JAMAICA_BLOCK_GET_DATA32(b1,1).i = (-1);
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,5).r,1).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r1,jam_mtd_com_sun_org_apache_xerces_internal_xni_Namesntext_1_popContext1);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
l5:
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_16_next11;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,1).i = n0;
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-5;
 return n0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_scanSement4(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r13=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r16=JAMAICA_NULL;
 jamaica_int32 n5=0,n7=0,n9=0,n10=0,n11=0,n12=0;
 jamaica_ref b6=JAMAICA_NULL,b12=JAMAICA_NULL,b13=JAMAICA_NULL,b14=JAMAICA_NULL,b16=JAMAICA_NULL,b24=JAMAICA_NULL,b25=JAMAICA_NULL,b26=JAMAICA_NULL,b27=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+14;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_scanSement4;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b25,0).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b26,7).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b26,5).b[2])==0) { goto l7; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b26,5).b[1])!=0) { goto l7; }
 b25=JAMAICA_BLOCK_GET_DATA32(b25,2).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_getNext2,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 r7=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 r8=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(r7,5).r;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r9,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipString30,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_GET_REF_ARRAY(r10,n9,r10);
{ jamaica_ref m=r10;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r9,r7);
}
 JAMAICA_BLOCK_GET_DATA32(b26,5).b[2] = (jamaica_int8) n9;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b26,5).b[2])==0) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,2).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_push3,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r=new_ref;}
#endif

 goto l7;
l6:
 
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

 r6=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_reposition7,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=r0;
 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,7).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b24,5).b[2])==0) { goto l9; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b24,5).b[1])==0) { goto l12; }
l9:
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,2).r,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_nextEement5,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 r7=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 b25=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b25,1).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b25,1).r=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b25,1).r=new_ref;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r6,3).b[3])==0) { goto l11; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanQName23,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,0).r,1).r,1).r);
}
 goto l12;
l11:
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanName22,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 r7=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_QName_2_setValues4,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,JAMAICA_NULL,r7,r7,JAMAICA_NULL);
}
l12:
 r6=r0;
 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,0).r,7).r,5).b[1])==0) { goto l14; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,2).r,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_matchement4,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,1).r);
}
l14:
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b26,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,2).r,0).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,2).r,0).r=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,2).r,0).r=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(r7,5).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r8=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b26=JAMAICA_BLOCK_GET_DATA32(b25,0).r;
 b27=JAMAICA_BLOCK_GET_DATA32(b26,4).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b27,4).b[0])==0) { goto l20; }
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b26,5).r,1).r;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r9,jam_mtd_com_sun_org_apache_xerces_internal_xni_Namesntext_1_pushCntext0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r9);
}
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,3).r,6).i!=26) { goto l20; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b27,4).b[1])==0) { goto l20; }
 r9=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r10=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 JAMAICA_SET_REF_ARRAY_D0(ct,r10,0,r7);
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 r11=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r9,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r11,3).i&15);
 JAMAICA_GET_REF_ARRAY(r11,n9,r11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r11;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r9,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3138,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3139,r10,1);
}
 b24=JAMAICA_BLOCK_GET_DATA32(b26,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 if (r6==JAMAICA_NULL) { goto l19; }
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,r7);
}
 if (n9!=0) { goto l20; }
l19:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r7=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,0).r,0).r,6).r,6).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r7,0,r9);
 JAMAICA_SET_REF_ARRAY_D0(ct,r7,1,r8);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r9,3).i&15);
 JAMAICA_GET_REF_ARRAY(r9,n9,r9);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r9;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3138,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3144,r7,1);
}
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

 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b25,3).r;
 JAMAICA_BLOCK_GET_DATA32(b26,5).b[0] = (jamaica_int8) 0;
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,1).r,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtrImpl_37_removbutes4,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r9,3).i&15);
 JAMAICA_GET_REF_ARRAY(r9,n9,r9);
{ jamaica_ref m=r9;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_seekCrtTag23,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 if (n9!=0) { goto l29; }
 JAMAICA_BLOCK_GET_DATA32(b26,5).b[1] = (jamaica_int8) 1;
 JAMAICA_BLOCK_GET_DATA32(b24,2).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r6,6).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,0).r,4).r,4).b[3] = (jamaica_int8) 0;
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 r7=JAMAICA_BLOCK_GET_R(r6,1);
 r7=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_scanAibute5,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n10=(n10&15);
 b27=JAMAICA_BLOCK_GET_DATA32(b25,0).r;
 b27=JAMAICA_BLOCK_GET_DATA32(b27,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r9=r8;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r10=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r8=JAMAICA_BLOCK_GET_R(r10,1);
 r8=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n5=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_seekCrtTag23,1).i;
 n5=((n5>>20) &  ((jamaica_int32)4095));
 n7=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n7=(n7&15);
l22:
 JAMAICA_GET_REF_ARRAY(r7,n9,r11);
{ jamaica_ref m=r11;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,JAMAICA_BLOCK_GET_DATA32(b26,3).r);
}
 if (JAMAICA_BLOCK_GET_DATA32(b27,6).r==JAMAICA_NULL) { goto l25; }
 r11=JAMAICA_BLOCK_GET_DATA32(b26,3).r;
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r11,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_getLength15,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n11,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r11);
}
 if (n11<=JAMAICA_BLOCK_GET_DATA32(b25,6).i) { goto l25; }
 r11=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 r12=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r12,0,r9);
 n11=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Integer_71,5).i;
 if (((n11>>20) |  ((n11>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Integer_71,-1);
 }
 if (ct->plainAlloc) {
  r13 = jamaicaGC_PlainAllocHeadBlock(ct,2);
  if (r13 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r13,1)=jam_class_java_lang_Integer_71;
  }
 } else {
 r13=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Integer_71);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 if (r13==JAMAICA_NULL) { goto LABEL_tOOME; }
 r14=JAMAICA_BLOCK_GET_DATA32(b26,3).r;
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 r15=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r14,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_getLength15,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r15,3).i&15);
 JAMAICA_GET_REF_ARRAY(r15,n11,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r14);
}
 jam_comp_java_lang_Integer_71__00030003e12(ct,r13,n11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r12,1,r13);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 r13=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r11,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r13,3).i&15);
 JAMAICA_GET_REF_ARRAY(r13,n11,r13);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r13;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r11,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3138,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3157,r12,2);
}
l25:
 JAMAICA_GET_REF_ARRAY(r8,n5,r11);
{ jamaica_ref m=r11;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l27; }
 jamaicaScheduler_syncPointFull(ct);
l27:
 if (n11==0) { goto l22; }
 
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
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r10,7).r,0).r,3).r,5).b[1] = (jamaica_int8) 0;
l29:
 
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

 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,0).r,4).r,4).b[0])==0) { goto l61; }
 b25=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 if (r7!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFIXMLNS2,7).r,4).r) { goto l32; }
 r7=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r8=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r8,0,r6);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n9,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3163,r8,2);
}
l32:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(r6,3).r==JAMAICA_NULL) { goto l34; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 goto l35;
l34:
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r;
l35:
 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,0).r,5).r,1).r;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r9,jam_mtd_com_sun_org_apache_xerces_internal_xni_Namesntext_1_getURI3);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r6=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r9,r6);
}
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r8,6).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r8,6).r=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r8,6).r=new_ref;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,2).r,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r7=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r6,6).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r6,6).r=JAMAICA_BLOCK_GET_DATA32(r7,6).r;}
#else
{jamaica_ref new_ref=JAMAICA_BLOCK_GET_DATA32(r7,6).r;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r6,6).r=new_ref;}
#endif

 if (JAMAICA_BLOCK_GET_DATA32(r7,3).r!=JAMAICA_NULL) { goto l38; }
 if (JAMAICA_BLOCK_GET_DATA32(r7,6).r==JAMAICA_NULL) { goto l38; }
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r7,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r7,3).r=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r;}
#else
{jamaica_ref new_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r7,3).r=new_ref;}
#endif

l38:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=r0;
 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l40; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

l40:
 if (r8==JAMAICA_NULL) { goto l43; }
 if (JAMAICA_BLOCK_GET_DATA32(r7,6).r!=JAMAICA_NULL) { goto l43; }
 r6=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r9=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r9,0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r7=JAMAICA_BLOCK_GET_DATA32(r7,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r9,1,r7);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3167,r9,2);
}
l43:
 
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

 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_getLength15,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 n10=0;
 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 r8=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b25=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b25,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 b6=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r;
 r9=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 b26=JAMAICA_BLOCK_GET_DATA32(r9,7).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b26,0).r;
 b27=JAMAICA_BLOCK_GET_DATA32(b26,0).r;
 b27=JAMAICA_BLOCK_GET_DATA32(b27,5).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b26,1).r;
 b12=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r;
 r10=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b13=JAMAICA_BLOCK_GET_DATA32(r10,7).r;
 b14=JAMAICA_BLOCK_GET_DATA32(b13,0).r;
 b14=JAMAICA_BLOCK_GET_DATA32(b14,1).r;
 r11=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 b16=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 b16=JAMAICA_BLOCK_GET_DATA32(b16,0).r;
 b16=JAMAICA_BLOCK_GET_DATA32(b16,1).r;
l44:
 if (n10>=n9) { goto l56; }
 r6=JAMAICA_BLOCK_GET_DATA32(b24,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_getName7,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n5,r12);
{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,n10,JAMAICA_BLOCK_GET_DATA32(b24,2).r);
}
 r6=JAMAICA_BLOCK_GET_DATA32(b24,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(r6,3).r==JAMAICA_NULL) { goto l47; }
 r6=JAMAICA_BLOCK_GET_DATA32(b25,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 goto l48;
l47:
 n5=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n5>>20) |  ((n5>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 r6=JAMAICA_BLOCK_GET_DATA32(b6,4).r;
l48:
 r12=r6;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 r13=JAMAICA_BLOCK_GET_DATA32(b27,1).r;
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 r14=jamaicaInterpreter_getInterfaceMethod(ct,r13,jam_mtd_com_sun_org_apache_xerces_internal_xni_Namesntext_1_getURI3);
{ jamaica_ref m=r14;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r6=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r13,r6);
}
 r13=r6;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 r14=JAMAICA_BLOCK_GET_DATA32(b26,2).r;
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 r14=JAMAICA_BLOCK_GET_DATA32(r14,6).r;
 if (r14==JAMAICA_NULL) { goto l50; }
 if (r14==r6) { goto l54; }
l50:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r6=r12;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n5=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n5>>20) |  ((n5>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 if (r6==JAMAICA_BLOCK_GET_DATA32(b12,4).r) { goto l54; }
 r12=JAMAICA_BLOCK_GET_DATA32(b14,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r12,6).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r12,6).r=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r12,6).r=new_ref;}
#endif

 if (r13!=JAMAICA_NULL) { goto l53; }
 r14=JAMAICA_BLOCK_GET_DATA32(b13,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 r15=jamaicaInterpreter_allocSimpleArray(ct,3,jam_typ_arr1_java_lang_Object_92);
 r16=JAMAICA_BLOCK_GET_DATA32(b14,1).r;
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
 r16=JAMAICA_BLOCK_GET_DATA32(r16,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r15,0,r16);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r12=JAMAICA_BLOCK_GET_DATA32(r12,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r15,1,r12);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r15,2,r6);
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r14,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n5,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r14,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3170,r15,2);
}
l53:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(b16,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r12=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_setURI37,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r12,3).i&15);
 JAMAICA_GET_REF_ARRAY(r12,n5,r12);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,n10,r13);
}
l54:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
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

 n10=JAMAICA_ADDS32(n10,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l44; }
 jamaicaScheduler_syncPointFull(ct);
 goto l44;
l56:
 
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

 if (n9<=1) { goto l61; }
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_R(r7,1);
 r8=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_checktesNS25,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n10=(n10&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 r7=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r8=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto l61; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(r7,6).r==JAMAICA_NULL) { goto l60; }
 
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

 b24=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r7=jamaicaInterpreter_allocSimpleArray(ct,3,jam_typ_arr1_java_lang_Object_92);
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,0).r,1).r,1).r;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 r9=JAMAICA_BLOCK_GET_DATA32(r9,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r7,0,r9);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r9=JAMAICA_BLOCK_GET_DATA32(r8,4).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r7,1,r9);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r8=JAMAICA_BLOCK_GET_DATA32(r8,6).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r7,2,r8);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3173,r7,2);
}
 goto l61;
l60:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r8=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r9=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(b25,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r9,0,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r7,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r9,1,r6);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r8,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n9,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3175,r9,2);
}
l61:
 
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

 r6=r0;
 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,3).r,5).b[0])==0) { goto l67; }
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b25,3).r;
 JAMAICA_BLOCK_GET_DATA32(b26,4).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b26,4).i,1);
 r7=JAMAICA_BLOCK_GET_DATA32(b26,3).r;
 n9=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b24,1).r,2).i,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n10=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(((n10>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n10&15);
 JAMAICA_GET_ARRAY32(r7,n9,n9);
 if (JAMAICA_BLOCK_GET_DATA32(b26,4).i>=n9) { goto l64; }
 r7=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b25,2).r,0).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(r8,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r7,0,r8);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3179,r7);
}
l64:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=r0;
 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,3).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,0).r;
 if (r7==JAMAICA_NULL) { goto l66; }
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r7,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_emptyement6);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,JAMAICA_BLOCK_GET_DATA32(b24,1).r,JAMAICA_BLOCK_GET_DATA32(b24,3).r,JAMAICA_NULL);
}
l66:
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDoStack_13_popElement6,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 r6=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 goto l71;
l67:
 b25=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b25,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,4).r;
 if (r7==JAMAICA_NULL) { goto l69; }
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n9=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_dtd_DTDGrrUtil_0_startement1,1).i>>20) &  ((jamaica_int32)4095));
 n10=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,JAMAICA_BLOCK_GET_DATA32(b24,1).r,JAMAICA_BLOCK_GET_DATA32(b24,3).r);
}
l69:
 r6=r0;
 b24=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,3).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b25,0).r;
 if (r7==JAMAICA_NULL) { goto l71; }
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r7,jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLDondler_6_startement5);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,JAMAICA_BLOCK_GET_DATA32(b24,1).r,JAMAICA_BLOCK_GET_DATA32(b24,3).r,JAMAICA_NULL);
}
l71:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-14;
 return ((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,5).b[0]);
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_scanAibute5(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r5=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+12;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31_scanAibute5;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanQName23,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,JAMAICA_BLOCK_GET_DATA32(b2,2).r);
}
 r3=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipSpaces28,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 r3=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,61);
}
 if (n0!=0) { goto l4; }
 r3=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,0).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(r4,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r3,0,r4);
 r4=JAMAICA_BLOCK_GET_DATA32(b2,2).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(r4,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r3,1,r4);
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3190,r3);
}
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,1).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipSpaces28,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 n0=0;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,7).b[1])==0) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b0,7).b[2])!=0) { goto l7; }
 n1=1;
 goto l8;
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n1=0;
l8:
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLDorImpl_11_getString33,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n2,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r5=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanAValue12,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r3,n2,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r4,JAMAICA_BLOCK_GET_DATA32(b1,5).r,JAMAICA_BLOCK_GET_DATA32(r6,5).r,r1,n0,n1);
}
 r3=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,4).r,4).b[0])==0) { goto l47; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(r2,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (JAMAICA_BLOCK_GET_DATA32(r2,3).r==JAMAICA_NULL) { goto l11; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,2).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l12;
l11:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l12:
 r6=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFIXMLNS2,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r2==r7) { goto l15; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r2!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r) { goto l47; }
 if (r4!=r7) { goto l47; }
l15:
 
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

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n0=JAMAICA_BLOCK_GET_DATA32(r5,4).i;
 n1=JAMAICA_BLOCK_GET_DATA32(r5,5).i;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_SymboTable_30_addSymbol3,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n2,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r7,n0,n1);
}
 r7=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFIXMLNS2,7).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 if (r6!=r8) { goto l18; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (r4!=r8) { goto l18; }
 r6=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r8=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,2).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r8,0,r2);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31101,r8,2);
}
l18:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_xni_Namesntext_1,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_xni_Namesntext_1,-1);
 }
 if (r7!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_xni_Namesntext_1_XMLNS_1URI1,7).r,4).r) { goto l20; }
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r6=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,2).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r6,0,r8);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31101,r6,2);
}
l20:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 if (r4!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFI_1XML1,7).r,4).r) { goto l23; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_xni_Namesntext_1,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_xni_Namesntext_1,-1);
 }
 if (r7==JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_xni_Namesntext_1_XML_1URI0,7).r,4).r) { goto l25; }
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r6=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,2).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r6,0,r8);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31105,r6,2);
}
 goto l25;
l23:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_xni_Namesntext_1,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_xni_Namesntext_1,-1);
 }
 if (r7!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_xni_Namesntext_1_XML_1URI0,7).r,4).r) { goto l25; }
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r6=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,2).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r6,0,r8);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31105,r6,2);
}
l25:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 if (r4==JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFIXMLNS2,7).r,4).r) { goto l27; }
 r2=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l28;
l27:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l28:
 r6=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r2!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r) { goto l31; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFIXMLNS2,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r4!=r2) { goto l31; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,2).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r8,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r8,3).r=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r8,3).r=new_ref;}
#endif

l31:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 if (r7!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_EMPTYTRING0,7).r,4).r) { goto l34; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 if (r4==JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_PREFIXMLNS2,7).r,4).r) { goto l34; }
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r4=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,1).r,2).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,0,r8);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError6,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3162,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_31106,r4,2);
}
l34:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,5).r,1).r;
 if ((r4!=JAMAICA_NULL) && (((r4!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r4,1) == jam_class_com_sun_org_apache_xerces_internal_util_Namespport_21)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4) == JAMAICA_NULL)?FALSE:(jam_class_com_sun_org_apache_xerces_internal_util_Namespport_21 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4),2))))==0)) { goto LABEL_tCCE; }
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_Namespport_21_contantext10,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n0,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,r6);
}
 if (n0==0) { goto l36; }
 r4=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,0).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(r8,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,0,r8);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,2).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(r8,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,1,r8);
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3175,r4);
}
l36:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=r4;
 r8=r6;
 if (((JAMAICA_BLOCK_GET_DATA32(r7,3).i>>4) &  ((jamaica_int32)268435455))==0) { goto l38; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r4=r7;
 goto l39;
l38:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r2=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r8=r6;
 r4=JAMAICA_NULL;
l39:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r2,jam_mtd_com_sun_org_apache_xerces_internal_xni_Namesntext_1_declarefix2);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r8,r4);
}
 if (n0!=0) { goto l45; }
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l42; }
 jamaicaScheduler_syncPointFull(ct);
l42:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,4).r,4).b[3])==0) { goto l44; }
 r4=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,0).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,0,r6);
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,1,r6);
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n0,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3175,r4);
}
l44:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,0).r,4).r,4).b[3] = (jamaica_int8) 1;
l45:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,0).r,4).r,4).b[2])==0) { goto l47; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-12;
 return;
l47:
 
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
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l49; }
 jamaicaScheduler_syncPointFull(ct);
l49:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,4).r,4).b[0])==0) { goto l51; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_getLength15,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_addAtuteNS24,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r2,n2,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r4,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_fCDATymbol4,7).r,4).r,JAMAICA_NULL);
}
 goto l53;
l51:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_getLength15,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 n3=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLSymbols_41,-1);
 }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_util_XMLSymbols_41_fCDATymbol4,7).r,4).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_addAtibute2,1).i>>20) &  ((jamaica_int32)4095));
 JAMAICA_GET_REF_ARRAY(r4,n0,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r6,r7,JAMAICA_NULL);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 if (n3!=n1) { goto l53; }
 r4=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,0).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,0,r6);
 r6=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(r6,5).r;
 JAMAICA_SET_REF_ARRAY_D0(ct,r4,1,r6);
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n1,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_com_sun_org_apache_xerces_internal_impl_XMLNSrImpl_3175,r4);
}
l53:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_R(r1,1);
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_setValue10,1).i>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r2,n1,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n0,r3,r5);
}
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_setSpified13,1).i>>20) &  ((jamaica_int32)4095));
 JAMAICA_GET_REF_ARRAY(r2,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n0,1);
}
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 if (r3==JAMAICA_NULL) { goto l55; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,5).r,1).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r0,jam_mtd_com_sun_org_apache_xerces_internal_xni_Namesntext_1_getURI3);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r3);
}
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLAtsImpl_35_setURI37,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r2,n1,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n0,r0);
}
l55:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
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
 ct->m.cli=tp-12;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return;
}
JBIEXPORT void JBICALL jam_comp_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanAValue12(jamaica_thread *ct,jamaica_ref r4,jamaica_ref r1,jamaica_ref r40,jamaica_ref r27,jamaica_ref r41,jamaica_int32 n77,jamaica_int32 n45) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r0=JAMAICA_NULL,r77=JAMAICA_NULL,r5=JAMAICA_NULL,r7=JAMAICA_NULL,r9=JAMAICA_NULL,r11=JAMAICA_NULL,r13=JAMAICA_NULL,r15=JAMAICA_NULL,r17=JAMAICA_NULL,r19=JAMAICA_NULL,r21=JAMAICA_NULL,r23=JAMAICA_NULL,r25=JAMAICA_NULL,r28=JAMAICA_NULL,r30=JAMAICA_NULL,r32=JAMAICA_NULL,r34=JAMAICA_NULL,r36=JAMAICA_NULL,r38=JAMAICA_NULL,r42=JAMAICA_NULL,r43=JAMAICA_NULL,r44=JAMAICA_NULL,r45=JAMAICA_NULL,r46=JAMAICA_NULL,r47=JAMAICA_NULL,r48=JAMAICA_NULL,r49=JAMAICA_NULL,r50=JAMAICA_NULL,r51=JAMAICA_NULL,r52=JAMAICA_NULL,r53=JAMAICA_NULL,r54=JAMAICA_NULL,r55=JAMAICA_NULL,r56=JAMAICA_NULL,r57=JAMAICA_NULL,r58=JAMAICA_NULL,r59=JAMAICA_NULL,r60=JAMAICA_NULL,r61=JAMAICA_NULL,r62=JAMAICA_NULL,r63=JAMAICA_NULL,r64=JAMAICA_NULL,r65=JAMAICA_NULL,r66=JAMAICA_NULL,r67=JAMAICA_NULL,r68=JAMAICA_NULL,r69=JAMAICA_NULL,r70=JAMAICA_NULL,r71=JAMAICA_NULL,r72=JAMAICA_NULL,r73=JAMAICA_NULL,r74=JAMAICA_NULL,r75=JAMAICA_NULL,r76=JAMAICA_NULL,r78=JAMAICA_NULL,r79=JAMAICA_NULL,r80=JAMAICA_NULL;
 jamaica_int32 n5=0,n7=0,n9=0,n11=0,n13=0,n15=0,n17=0,n19=0,n21=0,n23=0,n25=0,n27=0,n29=0,n31=0,n33=0,n35=0,n37=0,n39=0,n41=0,n43=0,n46=0,n48=0,n50=0,n52=0,n54=0,n56=0,n58=0,n60=0,n62=0,n64=0,n66=0,n68=0,n70=0,n73=0,n75=0,n78=0,n79=0,n80=0,n81=0,n82=0,n83=0,n84=0,n85=0,n86=0,n87=0,n88=0,n89=0,n90=0,n91=0,n92=0,n93=0,n94=0,n95=0,n96=0;
 jamaica_ref b2=JAMAICA_NULL,b4=JAMAICA_NULL,b6=JAMAICA_NULL,b8=JAMAICA_NULL,b10=JAMAICA_NULL,b11=JAMAICA_NULL,b12=JAMAICA_NULL,b13=JAMAICA_NULL,b14=JAMAICA_NULL,b15=JAMAICA_NULL,b17=JAMAICA_NULL,b18=JAMAICA_NULL,b19=JAMAICA_NULL,b20=JAMAICA_NULL,b22=JAMAICA_NULL,b24=JAMAICA_NULL,b26=JAMAICA_NULL,b28=JAMAICA_NULL,b30=JAMAICA_NULL,b32=JAMAICA_NULL,b34=JAMAICA_NULL,b35=JAMAICA_NULL,b36=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+63;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanAValue12;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[58];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[58]=r40;}
#else
{jamaica_ref new_ref=r40;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[58]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r27;}
#else
{jamaica_ref new_ref=r27;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r0=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b36=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b36=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 r42=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=JAMAICA_BLOCK_GET_R(r42,1);
 r43=JAMAICA_BLOCK_GET_DATA32(r43,3).r;
 n78=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_peekChar19,1).i;
 n78=((n78>>20) &  ((jamaica_int32)4095));
 n79=JAMAICA_BLOCK_GET_DATA32(r43,3).i;
 n79=(n79&15);
 JAMAICA_GET_REF_ARRAY(r43,n78,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 n78=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 n79=n78;
 if (n78==39) { goto l5; }
 if (n78==34) { goto l5; }
 r42=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 JAMAICA_SET_REF_ARRAY_D0(ct,r42,0,r27);
 r43=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n80=(JAMAICA_BLOCK_GET_DATA32(r43,3).i&15);
 JAMAICA_GET_REF_ARRAY(r43,n78,r43);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r43;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33125,r42);
}
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r0=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b36=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b36=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 r42=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r42,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n80=(JAMAICA_BLOCK_GET_DATA32(r43,3).i&15);
 JAMAICA_GET_REF_ARRAY(r43,n78,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 n78=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 n78=JAMAICA_BLOCK_GET_DATA32(b36,2).i;
 r42=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 r43=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 r44=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r42,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanLteral25,1).i>>20) &  ((jamaica_int32)4095));
 n81=(JAMAICA_BLOCK_GET_DATA32(r44,3).i&15);
 JAMAICA_GET_REF_ARRAY(r44,n80,r44);
{ jamaica_ref m=r44;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,n79,r43);
}
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r0,3).b[0])==0) { goto l7; }
 r42=JAMAICA_BLOCK_GET_DATA32(b36,6).r;
 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 r44=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r42,1),3).r;
 n81=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n82=(JAMAICA_BLOCK_GET_DATA32(r44,3).i&15);
 JAMAICA_GET_REF_ARRAY(r44,n81,r44);
{ jamaica_ref m=r44;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(b36,6).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n81=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n82=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n81,r42);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r42;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r43);
}
l7:
 
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

 r0=r4;
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,1).r;
 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r42,7).r,5).i<=0) { goto l9; }
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n81=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_normaspace15,1).i>>20) &  ((jamaica_int32)4095));
 n82=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n81,r42);
{ jamaica_ref m=r42;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1);
}
l9:
 if (n80==n79) { goto l106; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).b[2] = (jamaica_int8) 1;
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n81=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_getStuffer28,1).i>>20) &  ((jamaica_int32)4095));
 n82=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n81,r0);
{ jamaica_ref m=r0;
ct->calledMethod=m;
 r42=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 r0=r42;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 r43=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r42,1),3).r;
 n81=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_clear2,1).i>>20) &  ((jamaica_int32)4095));
 n82=(JAMAICA_BLOCK_GET_DATA32(r43,3).i&15);
 JAMAICA_GET_REF_ARRAY(r43,n81,r43);
{ jamaica_ref m=r43;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42);
}
 r42=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r43=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r44=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n81=0;
 n82=0;
 r13=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n21=0;
 n23=0;
 r15=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n25=0;
 n27=0;
 r17=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n29=0;
 n31=0;
 r19=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n33=0;
 n35=0;
 r21=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n37=0;
 n39=0;
 r30=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 n54=0;
 n56=0;
 r32=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r32;}
#else
{jamaica_ref new_ref=r32;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 n58=0;
 n60=0;
 if (r42==JAMAICA_NULL) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r44=JAMAICA_BLOCK_GET_R(r42,1);
 r44=JAMAICA_BLOCK_GET_DATA32(r44,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n81=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i;
 n81=((n81>>20) &  ((jamaica_int32)4095));
 n82=JAMAICA_BLOCK_GET_DATA32(r44,3).i;
 n82=(n82&15);
l12:
 r45=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 b36=JAMAICA_BLOCK_GET_DATA32(r45,7).r;
 b36=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 n83=n78;
 r46=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(r46,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 n84=n78;
 r47=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 b4=JAMAICA_BLOCK_GET_DATA32(r47,7).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b4,1).r;
 r48=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 r49=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 r50=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r50;}
#else
{jamaica_ref new_ref=r50;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(r49,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 r5=JAMAICA_BLOCK_GET_R(r49,1);
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 n5=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanCValue18,1).i;
 n5=((n5>>20) &  ((jamaica_int32)4095));
 n7=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n7=(n7&15);
 r51=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r51;}
#else
{jamaica_ref new_ref=r51;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 r7=JAMAICA_BLOCK_GET_R(r48,1);
 r7=JAMAICA_BLOCK_GET_DATA32(r7,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanCValue18,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n11=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n11=(n11&15);
 r52=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r52;}
#else
{jamaica_ref new_ref=r52;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 r9=JAMAICA_BLOCK_GET_R(r52,1);
 r9=JAMAICA_BLOCK_GET_DATA32(r9,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 n13=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i;
 n13=((n13>>20) &  ((jamaica_int32)4095));
 n15=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n15=(n15&15);
 n85=n78;
 r53=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r53;}
#else
{jamaica_ref new_ref=r53;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 b8=JAMAICA_BLOCK_GET_DATA32(r53,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 r54=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r54;}
#else
{jamaica_ref new_ref=r54;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 r11=JAMAICA_BLOCK_GET_R(r54,1);
 r11=JAMAICA_BLOCK_GET_DATA32(r11,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 n17=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i;
 n17=((n17>>20) &  ((jamaica_int32)4095));
 n19=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n19=(n19&15);
 n86=n78;
 b10=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_fAmpSymbol23,7).r;
 r55=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=r55;}
#else
{jamaica_ref new_ref=r55;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[28]=new_ref;}
#endif

 if (r55==JAMAICA_NULL) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r13=JAMAICA_BLOCK_GET_R(r55,1);
 r13=JAMAICA_BLOCK_GET_DATA32(r13,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n21=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n21=((n21>>20) &  ((jamaica_int32)4095));
 n23=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n23=(n23&15);
l14:
 b11=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_fAposymbol27,7).r;
 r56=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=r56;}
#else
{jamaica_ref new_ref=r56;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[29]=new_ref;}
#endif

 if (r56==JAMAICA_NULL) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 r15=JAMAICA_BLOCK_GET_R(r56,1);
 r15=JAMAICA_BLOCK_GET_DATA32(r15,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 n25=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n25=((n25>>20) &  ((jamaica_int32)4095));
 n27=JAMAICA_BLOCK_GET_DATA32(r15,3).i;
 n27=(n27&15);
l16:
 b12=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_fLtSymbol24,7).r;
 r57=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=r57;}
#else
{jamaica_ref new_ref=r57;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[30]=new_ref;}
#endif

 if (r57==JAMAICA_NULL) { goto l18; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 r17=JAMAICA_BLOCK_GET_R(r57,1);
 r17=JAMAICA_BLOCK_GET_DATA32(r17,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n29=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n29=((n29>>20) &  ((jamaica_int32)4095));
 n31=JAMAICA_BLOCK_GET_DATA32(r17,3).i;
 n31=(n31&15);
l18:
 b13=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_fGtSymbol25,7).r;
 r58=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=r58;}
#else
{jamaica_ref new_ref=r58;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[31]=new_ref;}
#endif

 if (r58==JAMAICA_NULL) { goto l20; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 r19=JAMAICA_BLOCK_GET_R(r58,1);
 r19=JAMAICA_BLOCK_GET_DATA32(r19,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n33=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n33=((n33>>20) &  ((jamaica_int32)4095));
 n35=JAMAICA_BLOCK_GET_DATA32(r19,3).i;
 n35=(n35&15);
l20:
 b14=JAMAICA_BLOCK_GET_DATA32(jam_fld_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_fQuotymbol26,7).r;
 r59=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r59;}
#else
{jamaica_ref new_ref=r59;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 if (r59==JAMAICA_NULL) { goto l22; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 r21=JAMAICA_BLOCK_GET_R(r59,1);
 r21=JAMAICA_BLOCK_GET_DATA32(r21,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n37=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n37=((n37>>20) &  ((jamaica_int32)4095));
 n39=JAMAICA_BLOCK_GET_DATA32(r21,3).i;
 n39=(n39&15);
l22:
 r60=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r60;}
#else
{jamaica_ref new_ref=r60;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 b15=JAMAICA_BLOCK_GET_DATA32(r60,7).r;
 b15=JAMAICA_BLOCK_GET_DATA32(b15,1).r;
 r61=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r61;}
#else
{jamaica_ref new_ref=r61;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 r23=JAMAICA_BLOCK_GET_R(r61,1);
 r23=JAMAICA_BLOCK_GET_DATA32(r23,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r23;}
#else
{jamaica_ref new_ref=r23;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 n41=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i;
 n41=((n41>>20) &  ((jamaica_int32)4095));
 n43=JAMAICA_BLOCK_GET_DATA32(r23,3).i;
 n43=(n43&15);
 r62=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r62;}
#else
{jamaica_ref new_ref=r62;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 b17=JAMAICA_BLOCK_GET_DATA32(r62,7).r;
 b18=JAMAICA_BLOCK_GET_DATA32(b17,1).r;
 r25=JAMAICA_BLOCK_GET_R(r60,1);
 r25=JAMAICA_BLOCK_GET_DATA32(r25,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r25;}
#else
{jamaica_ref new_ref=r25;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 n46=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i;
 n46=((n46>>20) &  ((jamaica_int32)4095));
 n48=JAMAICA_BLOCK_GET_DATA32(r25,3).i;
 n48=(n48&15);
 r63=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r63;}
#else
{jamaica_ref new_ref=r63;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 b19=JAMAICA_BLOCK_GET_DATA32(r63,7).r;
 r64=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r64;}
#else
{jamaica_ref new_ref=r64;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 r65=r27;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[40];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[40]=r65;}
#else
{jamaica_ref new_ref=r65;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[40]=new_ref;}
#endif

 r28=JAMAICA_BLOCK_GET_R(r64,1);
 r28=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[41];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[41]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[41]=new_ref;}
#endif

 n50=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i;
 n50=((n50>>20) &  ((jamaica_int32)4095));
 n52=JAMAICA_BLOCK_GET_DATA32(r28,3).i;
 n52=(n52&15);
 b20=JAMAICA_BLOCK_GET_DATA32(r64,7).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b20,1).r;
 n87=n78;
 r66=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[42];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[42]=r66;}
#else
{jamaica_ref new_ref=r66;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[42]=new_ref;}
#endif

 b22=JAMAICA_BLOCK_GET_DATA32(r66,7).r;
 b22=JAMAICA_BLOCK_GET_DATA32(b22,1).r;
 r67=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[43];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[43]=r67;}
#else
{jamaica_ref new_ref=r67;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[43]=new_ref;}
#endif

 if (r67==JAMAICA_NULL) { goto l24; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 r30=JAMAICA_BLOCK_GET_R(r67,1);
 r30=JAMAICA_BLOCK_GET_DATA32(r30,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 n54=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n54=((n54>>20) &  ((jamaica_int32)4095));
 n56=JAMAICA_BLOCK_GET_DATA32(r30,3).i;
 n56=(n56&15);
l24:
 n88=n78;
 r68=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[44];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[44]=r68;}
#else
{jamaica_ref new_ref=r68;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[44]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r68,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 r69=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[45];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[45]=r69;}
#else
{jamaica_ref new_ref=r69;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[45]=new_ref;}
#endif

 if (r69==JAMAICA_NULL) { goto l27; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 r32=JAMAICA_BLOCK_GET_R(r69,1);
 r32=JAMAICA_BLOCK_GET_DATA32(r32,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r32;}
#else
{jamaica_ref new_ref=r32;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 n58=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i;
 n58=((n58>>20) &  ((jamaica_int32)4095));
 n60=JAMAICA_BLOCK_GET_DATA32(r32,3).i;
 n60=(n60&15);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l27; }
 jamaicaScheduler_syncPointFull(ct);
l27:
 n89=n78;
 r70=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[46];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[46]=r70;}
#else
{jamaica_ref new_ref=r70;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[46]=new_ref;}
#endif

 b26=JAMAICA_BLOCK_GET_DATA32(r70,7).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b26,1).r;
 r34=JAMAICA_BLOCK_GET_R(r70,1);
 r34=JAMAICA_BLOCK_GET_DATA32(r34,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[47];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[47]=r34;}
#else
{jamaica_ref new_ref=r34;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[47]=new_ref;}
#endif

 n62=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_scanSgates25,1).i;
 n62=((n62>>20) &  ((jamaica_int32)4095));
 n64=JAMAICA_BLOCK_GET_DATA32(r34,3).i;
 n64=(n64&15);
 n90=n78;
 r71=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[48];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[48]=r71;}
#else
{jamaica_ref new_ref=r71;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[48]=new_ref;}
#endif

 r36=JAMAICA_BLOCK_GET_R(r71,1);
 r36=JAMAICA_BLOCK_GET_DATA32(r36,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[49];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[49]=r36;}
#else
{jamaica_ref new_ref=r36;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[49]=new_ref;}
#endif

 n66=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_isInvteral20,1).i;
 n66=((n66>>20) &  ((jamaica_int32)4095));
 n68=JAMAICA_BLOCK_GET_DATA32(r36,3).i;
 n68=(n68&15);
 n70=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i;
 n70=((n70>>20) &  ((jamaica_int32)4095));
 b28=JAMAICA_BLOCK_GET_DATA32(r71,7).r;
 b28=JAMAICA_BLOCK_GET_DATA32(b28,1).r;
 n91=n78;
 r72=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[50];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[50]=r72;}
#else
{jamaica_ref new_ref=r72;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[50]=new_ref;}
#endif

 b30=JAMAICA_BLOCK_GET_DATA32(r72,7).r;
 b30=JAMAICA_BLOCK_GET_DATA32(b30,1).r;
 n92=n79;
 r73=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[51];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[51]=r73;}
#else
{jamaica_ref new_ref=r73;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[51]=new_ref;}
#endif

 n93=n78;
 r74=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[52];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[52]=r74;}
#else
{jamaica_ref new_ref=r74;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[52]=new_ref;}
#endif

 b32=JAMAICA_BLOCK_GET_DATA32(r74,7).r;
 b32=JAMAICA_BLOCK_GET_DATA32(b32,1).r;
 r75=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[53];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[53]=r75;}
#else
{jamaica_ref new_ref=r75;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[53]=new_ref;}
#endif

 r38=JAMAICA_BLOCK_GET_R(r74,1);
 r38=JAMAICA_BLOCK_GET_DATA32(r38,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[54];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[54]=r38;}
#else
{jamaica_ref new_ref=r38;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[54]=new_ref;}
#endif

 n73=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_normaspace15,1).i;
 n73=((n73>>20) &  ((jamaica_int32)4095));
 n75=JAMAICA_BLOCK_GET_DATA32(r38,3).i;
 n75=(n75&15);
 n94=n79;
 r76=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[55];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[55]=r76;}
#else
{jamaica_ref new_ref=r76;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[55]=new_ref;}
#endif

 b34=JAMAICA_BLOCK_GET_DATA32(r76,7).r;
 b35=JAMAICA_BLOCK_GET_DATA32(b34,1).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l29; }
 jamaicaScheduler_syncPointFull(ct);
l29:
 if (r42==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r44,n81,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r43);
}
 n95=n80;
 if (n95!=38) { goto l69; }
 r77=JAMAICA_BLOCK_GET_DATA32(b36,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,38);
}
 if (n83!=JAMAICA_BLOCK_GET_DATA32(b36,2).i) { goto l33; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r45,3).b[0])==0) { goto l33; }
 r77=JAMAICA_BLOCK_GET_DATA32(b36,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,38);
}
l33:
 r77=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,35);
}
 if (n80==0) { goto l41; }
 if (n84!=JAMAICA_BLOCK_GET_DATA32(b4,2).i) { goto l37; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r47,3).b[0])==0) { goto l37; }
 r77=JAMAICA_BLOCK_GET_DATA32(b4,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,35);
}
l37:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r48,3).b[0])==0) { goto l39; }
 r77=JAMAICA_BLOCK_GET_DATA32(b6,6).r;
 JAMAICA_GET_REF_ARRAY(r5,n5,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r49,r50,r77);
}
 goto l40;
l39:
 JAMAICA_GET_REF_ARRAY(r7,n9,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48,r51,JAMAICA_NULL);
}
l40:
 if (n80==(-1)) { goto l94; } else { goto l94; }
l41:
 r77=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_R(r77,1);
 r78=JAMAICA_BLOCK_GET_DATA32(r78,3).r;
 n80=JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanName22,1).i;
 n80=((n80>>20) &  ((jamaica_int32)4095));
 n95=JAMAICA_BLOCK_GET_DATA32(r78,3).i;
 n95=(n95&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 r77=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 r78=r77;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=r78;}
#else
{jamaica_ref new_ref=r78;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[57]=new_ref;}
#endif

 if (r77!=JAMAICA_NULL) { goto l43; }
 JAMAICA_GET_REF_ARRAY(r9,n13,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r52,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33132,JAMAICA_NULL);
}
 goto l46;
l43:
 if (n85!=JAMAICA_BLOCK_GET_DATA32(b2,2).i) { goto l46; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r46,3).b[0])==0) { goto l46; }
 r79=JAMAICA_BLOCK_GET_DATA32(b2,6).r;
 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
 r80=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r79,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append4,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r80,3).i&15);
 JAMAICA_GET_REF_ARRAY(r80,n80,r80);
{ jamaica_ref m=r80;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79,r77);
}
l46:
 r77=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r79=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_skipChar27,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r79,3).i&15);
 JAMAICA_GET_REF_ARRAY(r79,n80,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,59);
}
 if (n80!=0) { goto l48; }
 r77=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 JAMAICA_SET_REF_ARRAY_D0(ct,r77,0,r78);
 JAMAICA_GET_REF_ARRAY(r11,n17,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r54,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33134,r77);
}
 goto l51;
l48:
 if (n86!=JAMAICA_BLOCK_GET_DATA32(b8,2).i) { goto l51; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r53,3).b[0])==0) { goto l51; }
 r77=JAMAICA_BLOCK_GET_DATA32(b8,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r79=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r79,3).i&15);
 JAMAICA_GET_REF_ARRAY(r79,n80,r79);
{ jamaica_ref m=r79;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,59);
}
l51:
 r77=r78;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[56]=new_ref;}
#endif

 if (r77!=JAMAICA_BLOCK_GET_DATA32(b10,4).r) { goto l53; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 if (r55==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r13,n21,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r55,38);
}
 goto l94;
l53:
 if (r77!=JAMAICA_BLOCK_GET_DATA32(b11,4).r) { goto l55; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 if (r56==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r15,n25,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r56,39);
}
 goto l94;
l55:
 if (r77!=JAMAICA_BLOCK_GET_DATA32(b12,4).r) { goto l57; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 if (r57==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r17,n29,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r57,60);
}
 goto l94;
l57:
 if (r77!=JAMAICA_BLOCK_GET_DATA32(b13,4).r) { goto l59; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 if (r58==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r19,n33,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r58,62);
}
 goto l94;
l59:
 if (r77!=JAMAICA_BLOCK_GET_DATA32(b14,4).r) { goto l61; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 if (r59==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r21,n37,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r59,34);
}
 goto l94;
l61:
 r79=JAMAICA_BLOCK_GET_DATA32(b15,0).r;
 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
 r80=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r79,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_XMLEnorage_7_isExtntity5,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r80,3).i&15);
 JAMAICA_GET_REF_ARRAY(r80,n80,r80);
{ jamaica_ref m=r80;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79,r77);
}
 if (n80==0) { goto l63; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 r77=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r77,0,r78);
 JAMAICA_GET_REF_ARRAY(r23,n41,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r61,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33141,r77);
}
 goto l94;
l63:
 r79=JAMAICA_BLOCK_GET_DATA32(b15,0).r;
 if (r79==JAMAICA_NULL) { goto LABEL_tNPE; }
 r80=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r79,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_xml_internal_stream_XMLEnorage_7_isDecntity9,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r80,3).i&15);
 JAMAICA_GET_REF_ARRAY(r80,n80,r80);
{ jamaica_ref m=r80;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r79,r77);
}
 if (n80!=0) { goto l68; }
 if (n45==0) { goto l67; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r62,3).b[2])==0) { goto l68; }
 r77=JAMAICA_BLOCK_GET_DATA32(b17,6).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[56]=new_ref;}
#endif

 r79=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 JAMAICA_SET_REF_ARRAY_D0(ct,r79,0,r78);
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r80=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLErorter_29_reporError7,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r80,3).i&15);
 JAMAICA_GET_REF_ARRAY(r80,n80,r80);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r80;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,JAMAICA_BLOCK_GET_DATA32(b18,1).r,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33143,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33144,r79,1);
}
 goto l68;
l67:
 r79=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r79,0,r77);
 JAMAICA_GET_REF_ARRAY(r25,n46,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r60,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33144,r79);
}
l68:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

 r77=JAMAICA_BLOCK_GET_DATA32(b19,7).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r79=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnnager_24_startntity12,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r79,3).i&15);
 JAMAICA_GET_REF_ARRAY(r79,n80,r79);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[57];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[57]=JAMAICA_NULL;}
#else
{l[57]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r79;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r78,1);
}
 goto l94;
l69:
 if (n95!=60) { goto l73; }
 r77=jamaicaInterpreter_allocSimpleArray(ct,2,jam_typ_arr1_java_lang_Object_92);
 JAMAICA_SET_REF_ARRAY_D0(ct,r77,0,JAMAICA_NULL);
 JAMAICA_SET_REF_ARRAY_D0(ct,r77,1,r65);
 JAMAICA_GET_REF_ARRAY(r28,n50,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r64,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33147,r77);
}
 r77=JAMAICA_BLOCK_GET_DATA32(b20,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n95=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 if (n87!=JAMAICA_BLOCK_GET_DATA32(b20,2).i) { goto l94; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r64,3).b[0])==0) { goto l94; }
 r77=JAMAICA_BLOCK_GET_DATA32(b20,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,(n80&65535));
}
 goto l94;
l73:
 if (n95==37) { goto l75; }
 if (n95!=93) { goto l78; }
l75:
 r77=JAMAICA_BLOCK_GET_DATA32(b22,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n95=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 n80=(n80&65535);
 if (r67==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r30,n54,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r67,n80);
}
 if (n88!=JAMAICA_BLOCK_GET_DATA32(b22,2).i) { goto l94; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r66,3).b[0])==0) { goto l94; }
 r77=JAMAICA_BLOCK_GET_DATA32(b22,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,n80);
}
 goto l94;
l78:
 if (n95==10) { goto l80; }
 if (n95!=13) { goto l83; }
l80:
 r77=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 if (r69==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r32,n58,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r69,32);
}
 if (n89!=JAMAICA_BLOCK_GET_DATA32(b24,2).i) { goto l94; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r68,3).b[0])==0) { goto l94; }
 r77=JAMAICA_BLOCK_GET_DATA32(b24,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,10);
}
 goto l94;
l83:
 if (n95==(-1)) { goto l89; }
 n96=JAMAICA_BLOCK_GET_DATA32(jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,5).i;
 if (((n96>>20) |  ((n96>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_sun_org_apache_xerces_internal_util_XMLChar_38,-1);
 }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_util_XMLChar_38_isHigogate4;
ct->calledMethod=m;
 n95=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n95);
}
 if (n95==0) { goto l89; }
 r77=JAMAICA_BLOCK_GET_DATA32(b26,7).r;
 JAMAICA_GET_REF_ARRAY(r34,n62,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r70,r77);
}
 if (n80==0) { goto l94; }
 JAMAICA_GET_REF_ARRAY(r44,n81,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,JAMAICA_BLOCK_GET_DATA32(b26,7).r);
}
 if (n90!=JAMAICA_BLOCK_GET_DATA32(b26,2).i) { goto l94; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r70,3).b[0])==0) { goto l94; }
 r77=JAMAICA_BLOCK_GET_DATA32(b26,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,JAMAICA_BLOCK_GET_DATA32(b26,7).r);
}
 goto l94;
l89:
 if (n80==(-1)) { goto l94; }
 JAMAICA_GET_REF_ARRAY(r36,n66,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 n95=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r71,n80);
}
 if (n95==0) { goto l94; }
 r77=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=r77;}
#else
{jamaica_ref new_ref=r77;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[56]=new_ref;}
#endif

 n95=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Integer_71,5).i;
 if (((n95>>20) |  ((n95>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Integer_71,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Integer_71_toString0;
ct->calledMethod=m;
 r78=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n80,16);
}
 JAMAICA_SET_REF_ARRAY_D0(ct,r77,0,r78);
 JAMAICA_GET_REF_ARRAY(r36,n70,r78);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[56];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[56]=JAMAICA_NULL;}
#else
{l[56]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r71,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33148,r77);
}
 r77=JAMAICA_BLOCK_GET_DATA32(b28,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n95=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77);
}
 if (n91!=JAMAICA_BLOCK_GET_DATA32(b28,2).i) { goto l94; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r71,3).b[0])==0) { goto l94; }
 r77=JAMAICA_BLOCK_GET_DATA32(b28,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append3,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,(n80&65535));
}
l94:
 r77=JAMAICA_BLOCK_GET_DATA32(b30,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n80=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanLteral25,1).i>>20) &  ((jamaica_int32)4095));
 n95=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n80,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 n80=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,n92,r73);
}
 if (n93!=JAMAICA_BLOCK_GET_DATA32(b30,2).i) { goto l97; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r72,3).b[0])==0) { goto l97; }
 r77=JAMAICA_BLOCK_GET_DATA32(b30,6).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 r78=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r77,1),3).r;
 n95=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n96=(JAMAICA_BLOCK_GET_DATA32(r78,3).i&15);
 JAMAICA_GET_REF_ARRAY(r78,n95,r78);
{ jamaica_ref m=r78;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r77,r73);
}
l97:
 r77=JAMAICA_BLOCK_GET_DATA32(b32,1).r;
 if (r77==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r77,7).r,5).i<=0) { goto l99; }
 JAMAICA_GET_REF_ARRAY(r38,n73,r77);
{ jamaica_ref m=r77;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r74,r75);
}
l99:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l101; }
 jamaicaScheduler_syncPointFull(ct);
l101:
 if (n80!=n94) { goto l29; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l104; }
 jamaicaScheduler_syncPointFull(ct);
l104:
 if (n78!=JAMAICA_BLOCK_GET_DATA32(b35,2).i) { goto l29; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[54];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[54]=JAMAICA_NULL;}
#else
{l[54]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[53];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[53]=JAMAICA_NULL;}
#else
{l[53]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[52];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[52]=JAMAICA_NULL;}
#else
{l[52]=JAMAICA_NULL;}
#endif

 
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
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_util_XMLStuffer_40_append6,1).i>>20) &  ((jamaica_int32)4095));
 n80=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n78,r42);
{ jamaica_ref m=r42;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1);
}
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLString_9_setValues3,1).i>>20) &  ((jamaica_int32)4095));
 n80=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n78,r42);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r42;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[55];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[55]=JAMAICA_NULL;}
#else
{l[55]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b34,3).b[2] = (jamaica_int8) 0;
l106:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r0=r4;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r0,3).b[0])==0) { goto l108; }
 if (r40==JAMAICA_NULL) { goto LABEL_tNPE; }
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r40,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_xni_XMLString_9_setValues3,1).i>>20) &  ((jamaica_int32)4095));
 n80=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n78,r42);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[58];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[58]=JAMAICA_NULL;}
#else
{l[58]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r42;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r40,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,6).r);
}
l108:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[58];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[58]=JAMAICA_NULL;}
#else
{l[58]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,1).r,1).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLEnanner_28_scanChar20,1).i>>20) &  ((jamaica_int32)4095));
 n80=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n78,r42);
{ jamaica_ref m=r42;
ct->calledMethod=m;
 n78=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 if (n78==n79) { goto l110; }
 r0=jamaicaInterpreter_allocSimpleArray(ct,1,jam_typ_arr1_java_lang_Object_92);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_REF_ARRAY_D0(ct,r0,0,r27);
 r42=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n78=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_com_sun_org_apache_xerces_internal_impl_XMLScanner_33_reporError26,1).i>>20) &  ((jamaica_int32)4095));
 n79=(JAMAICA_BLOCK_GET_DATA32(r42,3).i&15);
 JAMAICA_GET_REF_ARRAY(r42,n78,r42);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r42;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,jam_str_com_sun_org_apache_xerces_internal_impl_XMLScanner_33149,r0);
}
l110:
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-63;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

