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


JBIEXPORT void JBICALL jam_comp_javax_swing_text_html_parser_Parser_8_parsentent44(jamaica_thread *ct,jamaica_ref r5) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r18=JAMAICA_NULL,r48=JAMAICA_NULL,r1=JAMAICA_NULL,r4=JAMAICA_NULL,r8=JAMAICA_NULL,r10=JAMAICA_NULL,r12=JAMAICA_NULL,r14=JAMAICA_NULL,r16=JAMAICA_NULL,r19=JAMAICA_NULL,r20=JAMAICA_NULL,r21=JAMAICA_NULL,r22=JAMAICA_NULL,r23=JAMAICA_NULL,r24=JAMAICA_NULL,r25=JAMAICA_NULL,r26=JAMAICA_NULL,r27=JAMAICA_NULL,r28=JAMAICA_NULL,r29=JAMAICA_NULL,r30=JAMAICA_NULL,r31=JAMAICA_NULL,r32=JAMAICA_NULL,r33=JAMAICA_NULL,r34=JAMAICA_NULL,r35=JAMAICA_NULL,r36=JAMAICA_NULL,r37=JAMAICA_NULL,r38=JAMAICA_NULL,r39=JAMAICA_NULL,r40=JAMAICA_NULL,r41=JAMAICA_NULL,r42=JAMAICA_NULL,r43=JAMAICA_NULL,r44=JAMAICA_NULL,r45=JAMAICA_NULL,r46=JAMAICA_NULL,r47=JAMAICA_NULL,r49=JAMAICA_NULL,r50=JAMAICA_NULL;
 jamaica_int32 n47=0,n48=0,n0=0,n2=0,n4=0,n6=0,n8=0,n10=0,n12=0,n14=0,n16=0,n18=0,n20=0,n21=0,n23=0,n25=0,n27=0,n29=0,n31=0,n33=0,n35=0,n37=0,n39=0,n41=0,n43=0,n45=0,n49=0,n50=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL,b3=JAMAICA_NULL,b4=JAMAICA_NULL,b5=JAMAICA_NULL,b7=JAMAICA_NULL,b8=JAMAICA_NULL,b10=JAMAICA_NULL,b11=JAMAICA_NULL,b12=JAMAICA_NULL,b13=JAMAICA_NULL,b14=JAMAICA_NULL,b16=JAMAICA_NULL,b17=JAMAICA_NULL,b18=JAMAICA_NULL,b20=JAMAICA_NULL,b21=JAMAICA_NULL,b23=JAMAICA_NULL,b24=JAMAICA_NULL,b25=JAMAICA_NULL,b26=JAMAICA_NULL,b27=JAMAICA_NULL,b29=JAMAICA_NULL,b31=JAMAICA_NULL,b32=JAMAICA_NULL,b34=JAMAICA_NULL,b35=JAMAICA_NULL,b36=JAMAICA_NULL,b38=JAMAICA_NULL,b39=JAMAICA_NULL,b41=JAMAICA_NULL,b42=JAMAICA_NULL,b43=JAMAICA_NULL,b45=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+44;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_javax_swing_text_html_parser_Parser_8_parsentent44;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r18=Jam_java_lang_Thread_currentThread(ct);
 r19=r18;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r1=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n0=0;
 n2=0;
 r4=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n4=0;
 n6=0;
 n16=0;
 n18=0;
 n20=0;
 if (r19==JAMAICA_NULL) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_R(r19,1);
 r1=JAMAICA_BLOCK_GET_DATA32(r1,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_Thread_157_isIntupted43,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n2=(n2&15);
l4:
 r20=r18;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (r20==JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r18=JAMAICA_BLOCK_GET_R(r20,1);
 r4=JAMAICA_BLOCK_GET_DATA32(r18,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n4=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_Thread_157_interrupt40,1).i;
 n4=((n4>>20) &  ((jamaica_int32)4095));
 n6=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n6=(n6&15);
l6:
 r21=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r21,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r22=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 r18=JAMAICA_BLOCK_GET_R(r22,1);
 r18=JAMAICA_BLOCK_GET_DATA32(r18,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n8=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_parsecript43,1).i;
 n8=((n8>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r18,3).i;
 n10=(n10&15);
 b4=JAMAICA_BLOCK_GET_DATA32(r22,7).r;
 n12=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_makeTag2,1).i;
 n12=((n12>>20) &  ((jamaica_int32)4095));
 n14=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_getChars28,1).i;
 n14=((n14>>20) &  ((jamaica_int32)4095));
 if (jam_str_javax_swing_text_html_parser_Parser_8228==JAMAICA_NULL) { goto l8; }
 n16=JAMAICA_BLOCK_GET_DATA32(jam_str_javax_swing_text_html_parser_Parser_8228,3).i;
 n16=((n16>>4) &  ((jamaica_int32)268435455));
l8:
 if (jam_str_javax_swing_text_html_parser_Parser_8229==JAMAICA_NULL) { goto l11; }
 n18=JAMAICA_BLOCK_GET_DATA32(jam_str_javax_swing_text_html_parser_Parser_8229,3).i;
 n18=((n18>>4) &  ((jamaica_int32)268435455));
 if (jam_str_javax_swing_text_html_parser_Parser_8228==JAMAICA_NULL) { goto l11; }
 n20=JAMAICA_ADDS32(n16,n18);
l11:
 r23=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r23;}
#else
{jamaica_ref new_ref=r23;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 r8=JAMAICA_BLOCK_GET_R(r23,1);
 r8=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 n21=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_handlmment8,1).i;
 n21=((n21>>20) &  ((jamaica_int32)4095));
 n23=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n23=(n23&15);
 n25=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_endTag20,1).i;
 n25=((n25>>20) &  ((jamaica_int32)4095));
 b5=JAMAICA_BLOCK_GET_DATA32(r23,7).r;
 b5=JAMAICA_BLOCK_GET_DATA32(b5,0).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b5,3).r;
 r24=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 r10=JAMAICA_BLOCK_GET_R(r24,1);
 r10=JAMAICA_BLOCK_GET_DATA32(r10,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 n27=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_parseTag42,1).i;
 n27=((n27>>20) &  ((jamaica_int32)4095));
 n29=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n29=(n29&15);
 b8=JAMAICA_BLOCK_GET_DATA32(r24,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,0).r;
 b10=JAMAICA_BLOCK_GET_DATA32(b8,3).r;
 r25=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r25;}
#else
{jamaica_ref new_ref=r25;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 b11=JAMAICA_BLOCK_GET_DATA32(r25,7).r;
 b12=JAMAICA_BLOCK_GET_DATA32(b11,1).r;
 r12=JAMAICA_BLOCK_GET_R(r25,1);
 r12=JAMAICA_BLOCK_GET_DATA32(r12,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 n31=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_endTag20,1).i;
 n31=((n31>>20) &  ((jamaica_int32)4095));
 n33=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n33=(n33&15);
 r26=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r26;}
#else
{jamaica_ref new_ref=r26;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 b13=JAMAICA_BLOCK_GET_DATA32(r26,7).r;
 r14=JAMAICA_BLOCK_GET_R(r26,1);
 r14=JAMAICA_BLOCK_GET_DATA32(r14,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 n35=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_legalntext23,1).i;
 n35=((n35>>20) &  ((jamaica_int32)4095));
 n37=JAMAICA_BLOCK_GET_DATA32(r14,3).i;
 n37=(n37&15);
 n39=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_error18,1).i;
 n39=((n39>>20) &  ((jamaica_int32)4095));
 r27=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r27;}
#else
{jamaica_ref new_ref=r27;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 r28=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 r29=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 r30=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 b14=JAMAICA_BLOCK_GET_DATA32(r30,7).r;
 b14=JAMAICA_BLOCK_GET_DATA32(b14,1).r;
 r31=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r31;}
#else
{jamaica_ref new_ref=r31;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 b16=JAMAICA_BLOCK_GET_DATA32(r31,7).r;
 b17=JAMAICA_BLOCK_GET_DATA32(b16,1).r;
 r32=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r32;}
#else
{jamaica_ref new_ref=r32;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 b18=JAMAICA_BLOCK_GET_DATA32(r32,7).r;
 b18=JAMAICA_BLOCK_GET_DATA32(b18,0).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b18,3).r;
 r33=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r33;}
#else
{jamaica_ref new_ref=r33;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 b21=JAMAICA_BLOCK_GET_DATA32(r33,7).r;
 b21=JAMAICA_BLOCK_GET_DATA32(b21,1).r;
 r34=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r34;}
#else
{jamaica_ref new_ref=r34;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 b23=JAMAICA_BLOCK_GET_DATA32(r34,7).r;
 r35=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r35;}
#else
{jamaica_ref new_ref=r35;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r35,7).r;
 b25=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b23,1).r;
 r36=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r36;}
#else
{jamaica_ref new_ref=r36;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 b27=JAMAICA_BLOCK_GET_DATA32(r36,7).r;
 b27=JAMAICA_BLOCK_GET_DATA32(b27,1).r;
 r37=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r37;}
#else
{jamaica_ref new_ref=r37;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 b29=JAMAICA_BLOCK_GET_DATA32(r37,7).r;
 b29=JAMAICA_BLOCK_GET_DATA32(b29,0).r;
 b31=JAMAICA_BLOCK_GET_DATA32(b29,3).r;
 r38=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r38;}
#else
{jamaica_ref new_ref=r38;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 b32=JAMAICA_BLOCK_GET_DATA32(r38,7).r;
 b32=JAMAICA_BLOCK_GET_DATA32(b32,1).r;
 r39=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[28];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[28]=r39;}
#else
{jamaica_ref new_ref=r39;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[28]=new_ref;}
#endif

 b34=JAMAICA_BLOCK_GET_DATA32(r39,7).r;
 b35=JAMAICA_BLOCK_GET_DATA32(b34,1).r;
 r40=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[29];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[29]=r40;}
#else
{jamaica_ref new_ref=r40;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[29]=new_ref;}
#endif

 b36=JAMAICA_BLOCK_GET_DATA32(r40,7).r;
 b36=JAMAICA_BLOCK_GET_DATA32(b36,0).r;
 b38=JAMAICA_BLOCK_GET_DATA32(b36,3).r;
 r41=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[30];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[30]=r41;}
#else
{jamaica_ref new_ref=r41;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[30]=new_ref;}
#endif

 b39=JAMAICA_BLOCK_GET_DATA32(r41,7).r;
 b39=JAMAICA_BLOCK_GET_DATA32(b39,1).r;
 r42=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[31];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[31]=r42;}
#else
{jamaica_ref new_ref=r42;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[31]=new_ref;}
#endif

 b41=JAMAICA_BLOCK_GET_DATA32(r42,7).r;
 r16=JAMAICA_BLOCK_GET_R(r42,1);
 r16=JAMAICA_BLOCK_GET_DATA32(r16,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[32];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[32]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[32]=new_ref;}
#endif

 n41=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_legalntext23,1).i;
 n41=((n41>>20) &  ((jamaica_int32)4095));
 n43=JAMAICA_BLOCK_GET_DATA32(r16,3).i;
 n43=(n43&15);
 n45=JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_Parser_8_error18,1).i;
 n45=((n45>>20) &  ((jamaica_int32)4095));
 r43=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[33];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[33]=r43;}
#else
{jamaica_ref new_ref=r43;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[33]=new_ref;}
#endif

 r44=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[34];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[34]=r44;}
#else
{jamaica_ref new_ref=r44;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[34]=new_ref;}
#endif

 b42=JAMAICA_BLOCK_GET_DATA32(r44,7).r;
 r45=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[35];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[35]=r45;}
#else
{jamaica_ref new_ref=r45;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[35]=new_ref;}
#endif

 r46=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[36];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[36]=r46;}
#else
{jamaica_ref new_ref=r46;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[36]=new_ref;}
#endif

 b43=JAMAICA_BLOCK_GET_DATA32(r46,7).r;
 b43=JAMAICA_BLOCK_GET_DATA32(b43,0).r;
 r47=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[37];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[37]=r47;}
#else
{jamaica_ref new_ref=r47;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[37]=new_ref;}
#endif

 b45=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b45=JAMAICA_BLOCK_GET_DATA32(b45,1).r;
 if (r19==JAMAICA_NULL) { goto l94; }
 if (r20==JAMAICA_NULL) { goto l94; }
 if (jam_str_javax_swing_text_html_parser_Parser_8228==JAMAICA_NULL) { goto l94; }
 if (jam_str_javax_swing_text_html_parser_Parser_8229==JAMAICA_NULL) { goto l94; }
 if (n2!=0) { goto l94; }
 if (n6!=0) { goto l94; }
 if (n10!=0) { goto l94; }
 if (n23!=0) { goto l94; }
 if (n29!=0) { goto l94; }
 if (n33!=0) { goto l94; }
 if (n37!=0) { goto l94; }
 if (n43!=0) { goto l94; }
l23:
 JAMAICA_GET_REF_ARRAY_D0(r1,n0,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r19);
}
 if (n47==0) { goto l25; }
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY_D0(r4,n4,r18);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r18;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
 goto l165;
l25:
 n47=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 n48=n47;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_BLOCK_GET_DATA32(b2,1).i;
 r48=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(b3,0).r!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,1).r,7).r) { goto l31; }
 JAMAICA_GET_REF_ARRAY_D0(r18,n8,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r22);
}
 r48=JAMAICA_BLOCK_GET_DATA32(b4,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r49=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r48,1),3).r;
 n47=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_DTD_3_getElement3,1).i>>20) &  ((jamaica_int32)4095));
 n49=(JAMAICA_BLOCK_GET_DATA32(r49,3).i&15);
 JAMAICA_GET_REF_ARRAY(r49,n47,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 r48=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48,jam_str_javax_swing_text_html_parser_Parser_8189);
}
 JAMAICA_GET_REF_ARRAY_D0(r18,n12,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 r48=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,r48,1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r22,5).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r22,5).r=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r22,5).r=new_ref;}
#endif

 n47=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_String_134,5).i;
 if (((n47>>20) |  ((n47>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_String_134,-1);
 }
 if (ct->plainAlloc) {
  r48 = jamaicaGC_PlainAllocHeadBlock(ct,2);
  if (r48 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r48,1)=jam_class_java_lang_String_134;
  }
 } else {
 r48=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_String_134);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 if (r48==JAMAICA_NULL) { goto LABEL_tOOME; }
 JAMAICA_GET_REF_ARRAY_D0(r18,n14,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 r49=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,0);
}
 jam_comp_java_lang_String_134__00030003e8(ct,r48,r49);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 r48=jam_comp_java_lang_String_134_trim67(ct,r48);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 r49=r48;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n47=jam_comp_java_lang_String_134_startsWith38(ct,r48,jam_str_javax_swing_text_html_parser_Parser_8228);
 if (n47==0) { goto l30; }
 n47=jam_comp_java_lang_String_134_endsWith39(ct,r48,jam_str_javax_swing_text_html_parser_Parser_8229);
 if (n47==0) { goto l30; }
 n47=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n47=((n47>>4) &  ((jamaica_int32)268435455));
 if (n47<n20) { goto l30; }
 
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

 r48=jam_comp_java_lang_String_134_substring50(ct,r48,n16,JAMAICA_SUBS32(n47,n18));
 r49=r48;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

l30:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 if (r49==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 r48=jam_comp_java_lang_String_134_toChaArray69(ct,r49);
 JAMAICA_GET_REF_ARRAY_D0(r8,n21,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,r48);
}
 JAMAICA_GET_REF_ARRAY_D0(r8,n25,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,0);
}
 JAMAICA_BLOCK_GET_DATA32(b5,5).i = JAMAICA_BLOCK_GET_DATA32(b7,1).i;
 goto l86;
l31:
 switch (n47) {
 case (-1): goto l38;
 case 9: goto l71;
 case 10: goto l50;
 case 13: goto l59;
 case 32: goto l71;
 case 38: goto l39;
 case 47: goto l34;
 case 60: goto l32;
 default: goto l80;
 }
l32:
 JAMAICA_GET_REF_ARRAY_D0(r10,n27,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r24);
}
 JAMAICA_BLOCK_GET_DATA32(b8,5).i = JAMAICA_BLOCK_GET_DATA32(b10,1).i;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l34:
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r25);
 JAMAICA_BLOCK_GET_DATA32(b11,5).i = n47;
 r48=JAMAICA_BLOCK_GET_DATA32(b12,1).r;
 if (r48==JAMAICA_NULL) { goto l86; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[0])==0) { goto l86; }
 JAMAICA_GET_REF_ARRAY_D0(r12,n31,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r25,0);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l38:
 
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
 ct->m.cli=tp-44;
 return;
l39:
 if (JAMAICA_BLOCK_GET_DATA32(r26,4).i!=0) { goto l44; }
 r48=JAMAICA_BLOCK_GET_DATA32(b13,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r48=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,2).r;
 JAMAICA_GET_REF_ARRAY_D0(r14,n35,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,r48);
}
 if (n47!=0) { goto l42; }
 JAMAICA_GET_REF_ARRAY_D0(r14,n39,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,jam_str_javax_swing_text_html_parser_Parser_8235);
}
l42:
 r48=JAMAICA_BLOCK_GET_DATA32(r27,5).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r49=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r48,1),3).r;
 n47=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_TagElement_11_breaksFlow1,1).i>>20) &  ((jamaica_int32)4095));
 n48=(JAMAICA_BLOCK_GET_DATA32(r49,3).i&15);
 JAMAICA_GET_REF_ARRAY(r49,n47,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48);
}
 if (n47==0) { goto l44; }
 JAMAICA_BLOCK_GET_DATA32(r27,6).b[0] = (jamaica_int8) 0;
l44:
{ jamaica_ref m=jam_mtd_javax_swing_text_html_parser_Parser_8_parserence34;
ct->calledMethod=m;
 r48=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28);
}
 r49=r48;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 n47=JAMAICA_BLOCK_GET_DATA32(r28,4).i;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n48=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n48=((n48>>4) &  ((jamaica_int32)268435455));
 n47=JAMAICA_ADDS32(n47,n48);
 r48=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n48=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n48=((n48>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(n47,1)<=n48) { goto l46; }
 n49=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n49>>20) |  ((n49>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n47=jam_comp_java_lang_Math_82_max19(ct,JAMAICA_ADDS32(n47,128),JAMAICA_MULS32(n48,2));
 if ((n47<0)) { goto LABEL_tNASE; }
 r48=jamaicaInterpreter_allocSimpleArray(ct,n47,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 r50=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 if (r50==JAMAICA_NULL) { goto LABEL_tNPE; }
 Jam_java_lang_System_arraycopy(ct,r50,0,r48,0,((JAMAICA_BLOCK_GET_DATA32(r50,3).i>>4) &  ((jamaica_int32)268435455)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r28,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r28,3).r=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r28,3).r=new_ref;}
#endif

l46:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r29,6).b[0])==0) { goto l48; }
 JAMAICA_BLOCK_GET_DATA32(r29,6).b[0] = (jamaica_int8) 0;
 r48=JAMAICA_BLOCK_GET_DATA32(r29,3).r;
 n47=JAMAICA_BLOCK_GET_DATA32(r29,4).i;
 JAMAICA_BLOCK_GET_DATA32(r29,4).i = JAMAICA_ADDS32(n47,1);
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n48=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 if (((jamaica_uint32)(n47))>=((jamaica_uint32)(((n48>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n49=(n48&15);
 JAMAICA_SET_ARRAY16(r48,n47,32);
l48:
 if (r49==JAMAICA_NULL) { goto LABEL_tNPE; }
 n47=((JAMAICA_BLOCK_GET_DATA32(r49,3).i>>4) &  ((jamaica_int32)268435455));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r49,0,JAMAICA_BLOCK_GET_DATA32(r30,3).r,JAMAICA_BLOCK_GET_DATA32(r30,4).i,n47);
 JAMAICA_BLOCK_GET_DATA32(r30,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(r30,4).i,n47);
 JAMAICA_BLOCK_GET_DATA32(b14,4).b[1] = (jamaica_int8) 0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l50:
 JAMAICA_BLOCK_GET_DATA32(b16,6).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b16,6).i,1);
 JAMAICA_BLOCK_GET_DATA32(b17,7).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b17,7).i,1);
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r31);
 JAMAICA_BLOCK_GET_DATA32(b16,5).i = n47;
 r48=JAMAICA_BLOCK_GET_DATA32(b17,1).r;
 if (r48==JAMAICA_NULL) { goto l52; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[1])!=0) { goto l86; }
l52:
 if (JAMAICA_BLOCK_GET_DATA32(r32,4).i!=0) { goto l54; }
 JAMAICA_BLOCK_GET_DATA32(b18,5).i = JAMAICA_BLOCK_GET_DATA32(b20,1).i;
l54:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l56; }
 jamaicaScheduler_syncPointFull(ct);
l56:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b21,4).b[1])!=0) { goto l23; }
 JAMAICA_BLOCK_GET_DATA32(r33,6).b[0] = (jamaica_int8) 1;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l59:
 JAMAICA_BLOCK_GET_DATA32(b23,6).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b23,6).i,1);
 n48=10;
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r34);
 JAMAICA_BLOCK_GET_DATA32(b23,5).i = n47;
 if (n47!=10) { goto l61; }
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r35);
 JAMAICA_BLOCK_GET_DATA32(b24,5).i = n47;
 JAMAICA_BLOCK_GET_DATA32(b25,5).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b25,5).i,1);
 goto l62;
l61:
 JAMAICA_BLOCK_GET_DATA32(b26,6).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b26,6).i,1);
l62:
 r48=JAMAICA_BLOCK_GET_DATA32(b27,1).r;
 if (r48==JAMAICA_NULL) { goto l64; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[1])!=0) { goto l86; }
l64:
 if (JAMAICA_BLOCK_GET_DATA32(r37,4).i!=0) { goto l66; }
 JAMAICA_BLOCK_GET_DATA32(b29,5).i = JAMAICA_BLOCK_GET_DATA32(b31,1).i;
l66:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l68; }
 jamaicaScheduler_syncPointFull(ct);
l68:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b32,4).b[1])!=0) { goto l23; }
 JAMAICA_BLOCK_GET_DATA32(r38,6).b[0] = (jamaica_int8) 1;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l71:
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r39);
 JAMAICA_BLOCK_GET_DATA32(b34,5).i = n47;
 r48=JAMAICA_BLOCK_GET_DATA32(b35,1).r;
 if (r48==JAMAICA_NULL) { goto l73; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[1])!=0) { goto l86; }
l73:
 if (JAMAICA_BLOCK_GET_DATA32(r40,4).i!=0) { goto l75; }
 JAMAICA_BLOCK_GET_DATA32(b36,5).i = JAMAICA_BLOCK_GET_DATA32(b38,1).i;
l75:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l77; }
 jamaicaScheduler_syncPointFull(ct);
l77:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b39,4).b[1])!=0) { goto l23; }
 JAMAICA_BLOCK_GET_DATA32(r41,6).b[0] = (jamaica_int8) 1;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l80:
 if (JAMAICA_BLOCK_GET_DATA32(r42,4).i!=0) { goto l85; }
 r48=JAMAICA_BLOCK_GET_DATA32(b41,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r48=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,2).r;
 JAMAICA_GET_REF_ARRAY_D0(r16,n41,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r48);
}
 if (n47!=0) { goto l83; }
 JAMAICA_GET_REF_ARRAY_D0(r16,n45,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,jam_str_javax_swing_text_html_parser_Parser_8235);
}
l83:
 r48=JAMAICA_BLOCK_GET_DATA32(r43,5).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r49=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r48,1),3).r;
 n47=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_TagElement_11_breaksFlow1,1).i>>20) &  ((jamaica_int32)4095));
 n49=(JAMAICA_BLOCK_GET_DATA32(r49,3).i&15);
 JAMAICA_GET_REF_ARRAY(r49,n47,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48);
}
 if (n47==0) { goto l85; }
 JAMAICA_BLOCK_GET_DATA32(r43,6).b[0] = (jamaica_int8) 0;
l85:
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r44);
 JAMAICA_BLOCK_GET_DATA32(b42,5).i = n47;
l86:
 r48=JAMAICA_BLOCK_GET_DATA32(r45,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n47=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n47=((n47>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(r45,4).i,2)<=n47) { goto l88; }
 n49=JAMAICA_ADDS32(n47,128);
 if ((n49<0)) { goto LABEL_tNASE; }
 r49=jamaicaInterpreter_allocSimpleArray(ct,n49,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r48,0,r49,0,n47);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r45,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r45,3).r=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r45,3).r=new_ref;}
#endif

l88:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r46,6).b[0])==0) { goto l92; }
 if (JAMAICA_BLOCK_GET_DATA32(r46,4).i!=0) { goto l91; }
 JAMAICA_BLOCK_GET_DATA32(b43,5).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b43,5).i,1);
l91:
 r48=JAMAICA_BLOCK_GET_DATA32(r47,3).r;
 n47=JAMAICA_BLOCK_GET_DATA32(r47,4).i;
 JAMAICA_BLOCK_GET_DATA32(r47,4).i = JAMAICA_ADDS32(n47,1);
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n49=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 if (((jamaica_uint32)(n47))>=((jamaica_uint32)(((n49>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n50=(n49&15);
 JAMAICA_SET_ARRAY16(r48,n47,32);
 JAMAICA_BLOCK_GET_DATA32(r47,6).b[0] = (jamaica_int8) 0;
l92:
 r48=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n47=JAMAICA_BLOCK_GET_DATA32(r5,4).i;
 JAMAICA_BLOCK_GET_DATA32(r5,4).i = JAMAICA_ADDS32(n47,1);
 n48=(n48&65535);
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n49=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 if (((jamaica_uint32)(n47))>=((jamaica_uint32)(((n49>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n50=(n49&15);
 JAMAICA_SET_ARRAY16(r48,n47,n48);
 JAMAICA_BLOCK_GET_DATA32(b45,4).b[1] = (jamaica_int8) 0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 jamaicaScheduler_syncPointFull(ct);
 goto l23;
l94:
 if (r19==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r1,n0,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r19);
}
 if (n47==0) { goto l96; }
 
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

 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r4,n4,r18);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r18;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r20);
}
 goto l165;
l96:
 n47=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 n48=n47;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_BLOCK_GET_DATA32(b2,1).i;
 r48=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(b3,0).r!=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,1).r,7).r) { goto l102; }
 JAMAICA_GET_REF_ARRAY(r18,n8,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r22);
}
 r48=JAMAICA_BLOCK_GET_DATA32(b4,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r49=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r48,1),3).r;
 n47=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_DTD_3_getElement3,1).i>>20) &  ((jamaica_int32)4095));
 n49=(JAMAICA_BLOCK_GET_DATA32(r49,3).i&15);
 JAMAICA_GET_REF_ARRAY(r49,n47,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 r48=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48,jam_str_javax_swing_text_html_parser_Parser_8189);
}
 JAMAICA_GET_REF_ARRAY(r18,n12,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 r48=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,r48,1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r22,5).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r22,5).r=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r22,5).r=new_ref;}
#endif

 n47=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_String_134,5).i;
 if (((n47>>20) |  ((n47>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_String_134,-1);
 }
 if (ct->plainAlloc) {
  r48 = jamaicaGC_PlainAllocHeadBlock(ct,2);
  if (r48 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r48,1)=jam_class_java_lang_String_134;
  }
 } else {
 r48=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_String_134);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 if (r48==JAMAICA_NULL) { goto LABEL_tOOME; }
 JAMAICA_GET_REF_ARRAY(r18,n14,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 r49=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r22,0);
}
 jam_comp_java_lang_String_134__00030003e8(ct,r48,r49);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 r48=jam_comp_java_lang_String_134_trim67(ct,r48);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 r49=r48;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 if (jam_str_javax_swing_text_html_parser_Parser_8228==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (jam_str_javax_swing_text_html_parser_Parser_8229==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n47=jam_comp_java_lang_String_134_startsWith38(ct,r48,jam_str_javax_swing_text_html_parser_Parser_8228);
 if (n47==0) { goto l101; }
 n47=jam_comp_java_lang_String_134_endsWith39(ct,r48,jam_str_javax_swing_text_html_parser_Parser_8229);
 if (n47==0) { goto l101; }
 n47=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n47=((n47>>4) &  ((jamaica_int32)268435455));
 if (n47<n20) { goto l101; }
 
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

 r48=jam_comp_java_lang_String_134_substring50(ct,r48,n16,JAMAICA_SUBS32(n47,n18));
 r49=r48;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

l101:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 if (r49==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 r48=jam_comp_java_lang_String_134_toChaArray69(ct,r49);
 JAMAICA_GET_REF_ARRAY(r8,n21,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,r48);
}
 JAMAICA_GET_REF_ARRAY(r8,n25,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,0);
}
 JAMAICA_BLOCK_GET_DATA32(b5,5).i = JAMAICA_BLOCK_GET_DATA32(b7,1).i;
 goto l157;
l102:
 switch (n47) {
 case (-1): goto l109;
 case 9: goto l142;
 case 10: goto l121;
 case 13: goto l130;
 case 32: goto l142;
 case 38: goto l110;
 case 47: goto l105;
 case 60: goto l103;
 default: goto l151;
 }
l103:
 JAMAICA_GET_REF_ARRAY(r10,n27,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r24);
}
 JAMAICA_BLOCK_GET_DATA32(b8,5).i = JAMAICA_BLOCK_GET_DATA32(b10,1).i;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l105:
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r25);
 JAMAICA_BLOCK_GET_DATA32(b11,5).i = n47;
 r48=JAMAICA_BLOCK_GET_DATA32(b12,1).r;
 if (r48==JAMAICA_NULL) { goto l157; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[0])==0) { goto l157; }
 JAMAICA_GET_REF_ARRAY(r12,n31,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r25,0);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l109:
 
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
 ct->m.cli=tp-44;
 return;
l110:
 if (JAMAICA_BLOCK_GET_DATA32(r26,4).i!=0) { goto l115; }
 r48=JAMAICA_BLOCK_GET_DATA32(b13,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r48=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,2).r;
 JAMAICA_GET_REF_ARRAY(r14,n35,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,r48);
}
 if (n47!=0) { goto l113; }
 JAMAICA_GET_REF_ARRAY(r14,n39,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r26,jam_str_javax_swing_text_html_parser_Parser_8235);
}
l113:
 r48=JAMAICA_BLOCK_GET_DATA32(r27,5).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r49=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r48,1),3).r;
 n47=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_TagElement_11_breaksFlow1,1).i>>20) &  ((jamaica_int32)4095));
 n48=(JAMAICA_BLOCK_GET_DATA32(r49,3).i&15);
 JAMAICA_GET_REF_ARRAY(r49,n47,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48);
}
 if (n47==0) { goto l115; }
 JAMAICA_BLOCK_GET_DATA32(r27,6).b[0] = (jamaica_int8) 0;
l115:
{ jamaica_ref m=jam_mtd_javax_swing_text_html_parser_Parser_8_parserence34;
ct->calledMethod=m;
 r48=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r28);
}
 r49=r48;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 n47=JAMAICA_BLOCK_GET_DATA32(r28,4).i;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n48=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n48=((n48>>4) &  ((jamaica_int32)268435455));
 n47=JAMAICA_ADDS32(n47,n48);
 r48=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n48=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n48=((n48>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(n47,1)<=n48) { goto l117; }
 n49=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n49>>20) |  ((n49>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n47=jam_comp_java_lang_Math_82_max19(ct,JAMAICA_ADDS32(n47,128),JAMAICA_MULS32(n48,2));
 if ((n47<0)) { goto LABEL_tNASE; }
 r48=jamaicaInterpreter_allocSimpleArray(ct,n47,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 r50=JAMAICA_BLOCK_GET_DATA32(r28,3).r;
 if (r50==JAMAICA_NULL) { goto LABEL_tNPE; }
 Jam_java_lang_System_arraycopy(ct,r50,0,r48,0,((JAMAICA_BLOCK_GET_DATA32(r50,3).i>>4) &  ((jamaica_int32)268435455)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r28,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r28,3).r=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r28,3).r=new_ref;}
#endif

l117:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r29,6).b[0])==0) { goto l119; }
 JAMAICA_BLOCK_GET_DATA32(r29,6).b[0] = (jamaica_int8) 0;
 r48=JAMAICA_BLOCK_GET_DATA32(r29,3).r;
 n47=JAMAICA_BLOCK_GET_DATA32(r29,4).i;
 JAMAICA_BLOCK_GET_DATA32(r29,4).i = JAMAICA_ADDS32(n47,1);
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n48=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 if (((jamaica_uint32)(n47))>=((jamaica_uint32)(((n48>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n49=(n48&15);
 JAMAICA_SET_ARRAY16(r48,n47,32);
l119:
 if (r49==JAMAICA_NULL) { goto LABEL_tNPE; }
 n47=((JAMAICA_BLOCK_GET_DATA32(r49,3).i>>4) &  ((jamaica_int32)268435455));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r49,0,JAMAICA_BLOCK_GET_DATA32(r30,3).r,JAMAICA_BLOCK_GET_DATA32(r30,4).i,n47);
 JAMAICA_BLOCK_GET_DATA32(r30,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(r30,4).i,n47);
 JAMAICA_BLOCK_GET_DATA32(b14,4).b[1] = (jamaica_int8) 0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l121:
 JAMAICA_BLOCK_GET_DATA32(b16,6).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b16,6).i,1);
 JAMAICA_BLOCK_GET_DATA32(b17,7).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b17,7).i,1);
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r31);
 JAMAICA_BLOCK_GET_DATA32(b16,5).i = n47;
 r48=JAMAICA_BLOCK_GET_DATA32(b17,1).r;
 if (r48==JAMAICA_NULL) { goto l123; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[1])!=0) { goto l157; }
l123:
 if (JAMAICA_BLOCK_GET_DATA32(r32,4).i!=0) { goto l125; }
 JAMAICA_BLOCK_GET_DATA32(b18,5).i = JAMAICA_BLOCK_GET_DATA32(b20,1).i;
l125:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l127; }
 jamaicaScheduler_syncPointFull(ct);
l127:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b21,4).b[1])!=0) { goto l94; }
 JAMAICA_BLOCK_GET_DATA32(r33,6).b[0] = (jamaica_int8) 1;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l130:
 JAMAICA_BLOCK_GET_DATA32(b23,6).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b23,6).i,1);
 n48=10;
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r34);
 JAMAICA_BLOCK_GET_DATA32(b23,5).i = n47;
 if (n47!=10) { goto l132; }
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r35);
 JAMAICA_BLOCK_GET_DATA32(b24,5).i = n47;
 JAMAICA_BLOCK_GET_DATA32(b25,5).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b25,5).i,1);
 goto l133;
l132:
 JAMAICA_BLOCK_GET_DATA32(b26,6).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b26,6).i,1);
l133:
 r48=JAMAICA_BLOCK_GET_DATA32(b27,1).r;
 if (r48==JAMAICA_NULL) { goto l135; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[1])!=0) { goto l157; }
l135:
 if (JAMAICA_BLOCK_GET_DATA32(r37,4).i!=0) { goto l137; }
 JAMAICA_BLOCK_GET_DATA32(b29,5).i = JAMAICA_BLOCK_GET_DATA32(b31,1).i;
l137:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l139; }
 jamaicaScheduler_syncPointFull(ct);
l139:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b32,4).b[1])!=0) { goto l94; }
 JAMAICA_BLOCK_GET_DATA32(r38,6).b[0] = (jamaica_int8) 1;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l142:
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r39);
 JAMAICA_BLOCK_GET_DATA32(b34,5).i = n47;
 r48=JAMAICA_BLOCK_GET_DATA32(b35,1).r;
 if (r48==JAMAICA_NULL) { goto l144; }
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,4).b[1])!=0) { goto l157; }
l144:
 if (JAMAICA_BLOCK_GET_DATA32(r40,4).i!=0) { goto l146; }
 JAMAICA_BLOCK_GET_DATA32(b36,5).i = JAMAICA_BLOCK_GET_DATA32(b38,1).i;
l146:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l148; }
 jamaicaScheduler_syncPointFull(ct);
l148:
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b39,4).b[1])!=0) { goto l94; }
 JAMAICA_BLOCK_GET_DATA32(r41,6).b[0] = (jamaica_int8) 1;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l151:
 if (JAMAICA_BLOCK_GET_DATA32(r42,4).i!=0) { goto l156; }
 r48=JAMAICA_BLOCK_GET_DATA32(b41,4).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r48=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r48,7).r,2).r;
 JAMAICA_GET_REF_ARRAY(r16,n41,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,r48);
}
 if (n47!=0) { goto l154; }
 JAMAICA_GET_REF_ARRAY(r16,n45,r48);
{ jamaica_ref m=r48;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r42,jam_str_javax_swing_text_html_parser_Parser_8235);
}
l154:
 r48=JAMAICA_BLOCK_GET_DATA32(r43,5).r;
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 r49=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r48,1),3).r;
 n47=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_swing_text_html_parser_TagElement_11_breaksFlow1,1).i>>20) &  ((jamaica_int32)4095));
 n49=(JAMAICA_BLOCK_GET_DATA32(r49,3).i&15);
 JAMAICA_GET_REF_ARRAY(r49,n47,r49);
{ jamaica_ref m=r49;
ct->calledMethod=m;
 n47=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r48);
}
 if (n47==0) { goto l156; }
 JAMAICA_BLOCK_GET_DATA32(r43,6).b[0] = (jamaica_int8) 0;
l156:
 n47=jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(ct,r44);
 JAMAICA_BLOCK_GET_DATA32(b42,5).i = n47;
l157:
 r48=JAMAICA_BLOCK_GET_DATA32(r45,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=r48;}
#else
{jamaica_ref new_ref=r48;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[38]=new_ref;}
#endif

 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n47=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 n47=((n47>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(r45,4).i,2)<=n47) { goto l159; }
 n49=JAMAICA_ADDS32(n47,128);
 if ((n49<0)) { goto LABEL_tNASE; }
 r49=jamaicaInterpreter_allocSimpleArray(ct,n49,ct->vm->array_class[5]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[39]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r48,0,r49,0,n47);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[39];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[39]=JAMAICA_NULL;}
#else
{l[39]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r45,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r45,3).r=r49;}
#else
{jamaica_ref new_ref=r49;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r45,3).r=new_ref;}
#endif

l159:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[38];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[38]=JAMAICA_NULL;}
#else
{l[38]=JAMAICA_NULL;}
#endif

 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r46,6).b[0])==0) { goto l163; }
 if (JAMAICA_BLOCK_GET_DATA32(r46,4).i!=0) { goto l162; }
 JAMAICA_BLOCK_GET_DATA32(b43,5).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b43,5).i,1);
l162:
 r48=JAMAICA_BLOCK_GET_DATA32(r47,3).r;
 n47=JAMAICA_BLOCK_GET_DATA32(r47,4).i;
 JAMAICA_BLOCK_GET_DATA32(r47,4).i = JAMAICA_ADDS32(n47,1);
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n49=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 if (((jamaica_uint32)(n47))>=((jamaica_uint32)(((n49>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n50=(n49&15);
 JAMAICA_SET_ARRAY16(r48,n47,32);
 JAMAICA_BLOCK_GET_DATA32(r47,6).b[0] = (jamaica_int8) 0;
l163:
 r48=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 n47=JAMAICA_BLOCK_GET_DATA32(r5,4).i;
 JAMAICA_BLOCK_GET_DATA32(r5,4).i = JAMAICA_ADDS32(n47,1);
 n48=(n48&65535);
 if (r48==JAMAICA_NULL) { goto LABEL_tNPE; }
 n49=JAMAICA_BLOCK_GET_DATA32(r48,3).i;
 if (((jamaica_uint32)(n47))>=((jamaica_uint32)(((n49>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n50=(n49&15);
 JAMAICA_SET_ARRAY16(r48,n47,n48);
 JAMAICA_BLOCK_GET_DATA32(b45,4).b[1] = (jamaica_int8) 0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l94; }
 jamaicaScheduler_syncPointFull(ct);
 goto l94;
l165:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-44;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_javax_swing_text_html_parser_Parser_8_readCh47(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 volatile n0=0,n1=0,n2=0,n3=0;
 jamaica_ref volatile b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  jamaica_ref ec=JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(ct->cT,3),1);
  switch(n0) {
  case 1: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_io_Interption_44)) { goto l4; } /* fall through */
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_javax_swing_text_html_parser_Parser_8_readCh47;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=0;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,7).i<JAMAICA_BLOCK_GET_DATA32(b2,0).i) { goto l7; }
 n0=1;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b1,6).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Reader_98_read4,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n1,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r4);
}
 JAMAICA_BLOCK_GET_DATA32(b2,0).i = n1;
 n0=0;
 if (JAMAICA_BLOCK_GET_DATA32(b2,0).i>0) { goto l6; } else { goto l5; }
l4:
 
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

 r0=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 n0=0;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 jamaicaExceptions_throw(ct,r0);
l5:
 
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
 return (-1);
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,7).i = 0;
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,1).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,1).i,1);
 r2=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,7).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,7).i = JAMAICA_ADDS32(n1,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAYU16(r2,n1,n1);
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return n1;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

