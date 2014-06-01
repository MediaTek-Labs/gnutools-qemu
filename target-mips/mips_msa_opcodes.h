/* MSA Opcodes */
enum {
    OPC_SLL_df      = 0x7800000d | OPC_MSA,
    OPC_SLLI_df     = 0x78000009 | OPC_MSA,
    OPC_SRA_df      = 0x7880000d | OPC_MSA,
    OPC_SRAI_df     = 0x78800009 | OPC_MSA,
    OPC_SRL_df      = 0x7900000d | OPC_MSA,
    OPC_SRLI_df     = 0x79000009 | OPC_MSA,
    OPC_BCLR_df     = 0x7980000d | OPC_MSA,
    OPC_BCLRI_df    = 0x79800009 | OPC_MSA,
    OPC_BSET_df     = 0x7a00000d | OPC_MSA,
    OPC_BSETI_df    = 0x7a000009 | OPC_MSA,
    OPC_BNEG_df     = 0x7a80000d | OPC_MSA,
    OPC_BNEGI_df    = 0x7a800009 | OPC_MSA,
    OPC_BINSL_df    = 0x7b00000d | OPC_MSA,
    OPC_BINSLI_df   = 0x7b000009 | OPC_MSA,
    OPC_BINSR_df    = 0x7b80000d | OPC_MSA,
    OPC_BINSRI_df   = 0x7b800009 | OPC_MSA,
    OPC_ADDV_df     = 0x7800000e | OPC_MSA,
    OPC_ADDVI_df    = 0x78000006 | OPC_MSA,
    OPC_SUBV_df     = 0x7880000e | OPC_MSA,
    OPC_SUBVI_df    = 0x78800006 | OPC_MSA,
    OPC_MAX_S_df    = 0x7900000e | OPC_MSA,
    OPC_MAXI_S_df   = 0x79000006 | OPC_MSA,
    OPC_MAX_U_df    = 0x7980000e | OPC_MSA,
    OPC_MAXI_U_df   = 0x79800006 | OPC_MSA,
    OPC_MIN_S_df    = 0x7a00000e | OPC_MSA,
    OPC_MINI_S_df   = 0x7a000006 | OPC_MSA,
    OPC_MIN_U_df    = 0x7a80000e | OPC_MSA,
    OPC_MINI_U_df   = 0x7a800006 | OPC_MSA,
    OPC_MAX_A_df    = 0x7b00000e | OPC_MSA,
    OPC_MIN_A_df    = 0x7b80000e | OPC_MSA,
    OPC_CEQ_df      = 0x7800000f | OPC_MSA,
    OPC_CEQI_df     = 0x78000007 | OPC_MSA,
    OPC_CLT_S_df    = 0x7900000f | OPC_MSA,
    OPC_CLTI_S_df   = 0x79000007 | OPC_MSA,
    OPC_CLT_U_df    = 0x7980000f | OPC_MSA,
    OPC_CLTI_U_df   = 0x79800007 | OPC_MSA,
    OPC_CLE_S_df    = 0x7a00000f | OPC_MSA,
    OPC_CLEI_S_df   = 0x7a000007 | OPC_MSA,
    OPC_CLE_U_df    = 0x7a80000f | OPC_MSA,
    OPC_CLEI_U_df   = 0x7a800007 | OPC_MSA,
    OPC_LD_df       = 0x78000020 | OPC_MSA,
    OPC_ST_df       = 0x78000024 | OPC_MSA,
    OPC_SAT_S_df    = 0x7800000a | OPC_MSA,
    OPC_SAT_U_df    = 0x7880000a | OPC_MSA,
    OPC_ADD_A_df    = 0x78000010 | OPC_MSA,
    OPC_ADDS_A_df   = 0x78800010 | OPC_MSA,
    OPC_ADDS_S_df   = 0x79000010 | OPC_MSA,
    OPC_ADDS_U_df   = 0x79800010 | OPC_MSA,
    OPC_AVE_S_df    = 0x7a000010 | OPC_MSA,
    OPC_AVE_U_df    = 0x7a800010 | OPC_MSA,
    OPC_AVER_S_df   = 0x7b000010 | OPC_MSA,
    OPC_AVER_U_df   = 0x7b800010 | OPC_MSA,
    OPC_SUBS_S_df   = 0x78000011 | OPC_MSA,
    OPC_SUBS_U_df   = 0x78800011 | OPC_MSA,
    OPC_SUBSUS_U_df = 0x79000011 | OPC_MSA,
    OPC_SUBSUU_S_df = 0x79800011 | OPC_MSA,
    OPC_ASUB_S_df   = 0x7a000011 | OPC_MSA,
    OPC_ASUB_U_df   = 0x7a800011 | OPC_MSA,
    OPC_MULV_df     = 0x78000012 | OPC_MSA,
    OPC_MADDV_df    = 0x78800012 | OPC_MSA,
    OPC_MSUBV_df    = 0x79000012 | OPC_MSA,
    OPC_DIV_S_df    = 0x7a000012 | OPC_MSA,
    OPC_DIV_U_df    = 0x7a800012 | OPC_MSA,
    OPC_MOD_S_df    = 0x7b000012 | OPC_MSA,
    OPC_MOD_U_df    = 0x7b800012 | OPC_MSA,
    OPC_DOTP_S_df   = 0x78000013 | OPC_MSA,
    OPC_DOTP_U_df   = 0x78800013 | OPC_MSA,
    OPC_DPADD_S_df  = 0x79000013 | OPC_MSA,
    OPC_DPADD_U_df  = 0x79800013 | OPC_MSA,
    OPC_DPSUB_S_df  = 0x7a000013 | OPC_MSA,
    OPC_DPSUB_U_df  = 0x7a800013 | OPC_MSA,
    OPC_SLD_df      = 0x78000014 | OPC_MSA,
    OPC_SLDI_df     = 0x78000019 | OPC_MSA,
    OPC_SPLAT_df    = 0x78800014 | OPC_MSA,
    OPC_SPLATI_df   = 0x78400019 | OPC_MSA,
    OPC_PCKEV_df    = 0x79000014 | OPC_MSA,
    OPC_PCKOD_df    = 0x79800014 | OPC_MSA,
    OPC_ILVL_df     = 0x7a000014 | OPC_MSA,
    OPC_ILVR_df     = 0x7a800014 | OPC_MSA,
    OPC_ILVEV_df    = 0x7b000014 | OPC_MSA,
    OPC_ILVOD_df    = 0x7b800014 | OPC_MSA,
    OPC_VSHF_df     = 0x78000015 | OPC_MSA,
    OPC_SRAR_df     = 0x78800015 | OPC_MSA,
    OPC_SRARI_df    = 0x7900000a | OPC_MSA,
    OPC_SRLR_df     = 0x79000015 | OPC_MSA,
    OPC_SRLRI_df    = 0x7980000a | OPC_MSA,
    OPC_HADD_S_df   = 0x7a000015 | OPC_MSA,
    OPC_HADD_U_df   = 0x7a800015 | OPC_MSA,
    OPC_HSUB_S_df   = 0x7b000015 | OPC_MSA,
    OPC_HSUB_U_df   = 0x7b800015 | OPC_MSA,
    OPC_AND_V       = 0x7800001e | OPC_MSA,
    OPC_ANDI_B      = 0x78000000 | OPC_MSA,
    OPC_OR_V        = 0x7820001e | OPC_MSA,
    OPC_ORI_B       = 0x79000000 | OPC_MSA,
    OPC_NOR_V       = 0x7840001e | OPC_MSA,
    OPC_NORI_B      = 0x7a000000 | OPC_MSA,
    OPC_XOR_V       = 0x7860001e | OPC_MSA,
    OPC_XORI_B      = 0x7b000000 | OPC_MSA,
    OPC_BMNZ_V      = 0x7880001e | OPC_MSA,
    OPC_BMNZI_B     = 0x78000001 | OPC_MSA,
    OPC_BMZ_V       = 0x78a0001e | OPC_MSA,
    OPC_BMZI_B      = 0x79000001 | OPC_MSA,
    OPC_BSEL_V      = 0x78c0001e | OPC_MSA,
    OPC_BSELI_B     = 0x7a000001 | OPC_MSA,
    OPC_SHF_df      = 0x78000002 | OPC_MSA,
    OPC_BNZ_V       = 0x45e00000 | OPC_CP1,
    OPC_BZ_V        = 0x45600000 | OPC_CP1,
    OPC_FILL_df     = 0x7b00001e | OPC_MSA,
    OPC_PCNT_df     = 0x7b04001e | OPC_MSA,
    OPC_NLOC_df     = 0x7b08001e | OPC_MSA,
    OPC_NLZC_df     = 0x7b0c001e | OPC_MSA,
    OPC_COPY_S_df   = 0x78800019 | OPC_MSA,
    OPC_COPY_U_df   = 0x78c00019 | OPC_MSA,
    OPC_INSERT_df   = 0x79000019 | OPC_MSA,
    OPC_INSVE_df    = 0x79400019 | OPC_MSA,
    OPC_BNZ_df      = 0x47800000 | OPC_CP1,
    OPC_BZ_df       = 0x47000000 | OPC_CP1,
    OPC_LDI_df      = 0x7b000007 | OPC_MSA,
    OPC_FCAF_df     = 0x7800001a | OPC_MSA,
    OPC_FCUN_df     = 0x7840001a | OPC_MSA,
    OPC_FCEQ_df     = 0x7880001a | OPC_MSA,
    OPC_FCUEQ_df    = 0x78c0001a | OPC_MSA,
    OPC_FCLT_df     = 0x7900001a | OPC_MSA,
    OPC_FCULT_df    = 0x7940001a | OPC_MSA,
    OPC_FCLE_df     = 0x7980001a | OPC_MSA,
    OPC_FCULE_df    = 0x79c0001a | OPC_MSA,
    OPC_FSAF_df     = 0x7a00001a | OPC_MSA,
    OPC_FSUN_df     = 0x7a40001a | OPC_MSA,
    OPC_FSEQ_df     = 0x7a80001a | OPC_MSA,
    OPC_FSUEQ_df    = 0x7ac0001a | OPC_MSA,
    OPC_FSLT_df     = 0x7b00001a | OPC_MSA,
    OPC_FSULT_df    = 0x7b40001a | OPC_MSA,
    OPC_FSLE_df     = 0x7b80001a | OPC_MSA,
    OPC_FSULE_df    = 0x7bc0001a | OPC_MSA,
    OPC_FADD_df     = 0x7800001b | OPC_MSA,
    OPC_FSUB_df     = 0x7840001b | OPC_MSA,
    OPC_FMUL_df     = 0x7880001b | OPC_MSA,
    OPC_FDIV_df     = 0x78c0001b | OPC_MSA,
    OPC_FMADD_df    = 0x7900001b | OPC_MSA,
    OPC_FMSUB_df    = 0x7940001b | OPC_MSA,
    OPC_FEXP2_df    = 0x79c0001b | OPC_MSA,
    OPC_FEXDO_df    = 0x7a00001b | OPC_MSA,
    OPC_FTQ_df      = 0x7a80001b | OPC_MSA,
    OPC_FMIN_df     = 0x7b00001b | OPC_MSA,
    OPC_FMIN_A_df   = 0x7b40001b | OPC_MSA,
    OPC_FMAX_df     = 0x7b80001b | OPC_MSA,
    OPC_FMAX_A_df   = 0x7bc0001b | OPC_MSA,
    OPC_FCOR_df     = 0x7840001c | OPC_MSA,
    OPC_FCUNE_df    = 0x7880001c | OPC_MSA,
    OPC_FCNE_df     = 0x78c0001c | OPC_MSA,
    OPC_MUL_Q_df    = 0x7900001c | OPC_MSA,
    OPC_MADD_Q_df   = 0x7940001c | OPC_MSA,
    OPC_MSUB_Q_df   = 0x7980001c | OPC_MSA,
    OPC_FSOR_df     = 0x7a40001c | OPC_MSA,
    OPC_FSUNE_df    = 0x7a80001c | OPC_MSA,
    OPC_FSNE_df     = 0x7ac0001c | OPC_MSA,
    OPC_MULR_Q_df   = 0x7b00001c | OPC_MSA,
    OPC_MADDR_Q_df  = 0x7b40001c | OPC_MSA,
    OPC_MSUBR_Q_df  = 0x7b80001c | OPC_MSA,
    OPC_FCLASS_df   = 0x7b20001e | OPC_MSA,
    OPC_FTRUNC_S_df = 0x7b22001e | OPC_MSA,
    OPC_FTRUNC_U_df = 0x7b24001e | OPC_MSA,
    OPC_FSQRT_df    = 0x7b26001e | OPC_MSA,
    OPC_FRSQRT_df   = 0x7b28001e | OPC_MSA,
    OPC_FRCP_df     = 0x7b2a001e | OPC_MSA,
    OPC_FRINT_df    = 0x7b2c001e | OPC_MSA,
    OPC_FLOG2_df    = 0x7b2e001e | OPC_MSA,
    OPC_FEXUPL_df   = 0x7b30001e | OPC_MSA,
    OPC_FEXUPR_df   = 0x7b32001e | OPC_MSA,
    OPC_FFQL_df     = 0x7b34001e | OPC_MSA,
    OPC_FFQR_df     = 0x7b36001e | OPC_MSA,
    OPC_FTINT_S_df  = 0x7b38001e | OPC_MSA,
    OPC_FTINT_U_df  = 0x7b3a001e | OPC_MSA,
    OPC_FFINT_S_df  = 0x7b3c001e | OPC_MSA,
    OPC_FFINT_U_df  = 0x7b3e001e | OPC_MSA,
    OPC_CTCMSA      = 0x783e0019 | OPC_MSA,
    OPC_CFCMSA      = 0x787e0019 | OPC_MSA,
    OPC_MOVE_V      = 0x78be0019 | OPC_MSA,
};
