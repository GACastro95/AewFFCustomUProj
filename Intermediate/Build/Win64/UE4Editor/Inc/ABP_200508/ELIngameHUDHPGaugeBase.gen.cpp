// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELIngameHUDHPGaugeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELIngameHUDHPGaugeBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDHPGaugeBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerActionSkillData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESpecialMovesType();
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeRoster_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeStatusIcon_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeFire_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execGetGaugeMaterialParameter)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MainParam);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DiffParam);
		P_GET_UBOOL_REF(Z_Param_Out_IsPlus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGaugeMaterialParameter(Z_Param_Out_MainParam,Z_Param_Out_DiffParam,Z_Param_Out_IsPlus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execGetGaugeTexture)
	{
		P_GET_UBOOL(Z_Param_NewIsExciteState);
		P_GET_UBOOL(Z_Param_NewIsSpecialState);
		P_GET_UBOOL(Z_Param_NewIsDangerState);
		P_GET_UBOOL(Z_Param_IsKo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetGaugeTexture(Z_Param_NewIsExciteState,Z_Param_NewIsSpecialState,Z_Param_NewIsDangerState,Z_Param_IsKo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execIsDangerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDangerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execIsExciteState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExciteState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execIsSpecialState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpecialState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_DangerStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationFinishedEvent_DangerStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_GuageMaxStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationFinishedEvent_GuageMaxStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_RingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationFinishedEvent_RingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_SpecialStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationFinishedEvent_SpecialStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnChangedTouchLeaveRingFlag)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangedTouchLeaveRingFlag(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnFinishedAnimation_StatusText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedAnimation_StatusText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnMeterValuePenalty)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PenaltyRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMeterValuePenalty(Z_Param_PenaltyRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnPlayActionSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActionSkillNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayActionSkill(Z_Param_ActionSkillNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnPlayPassiveSkillEffect)
	{
		P_GET_STRUCT_REF(FStPassiveSkillData,Z_Param_Out_PassiveSkillData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayPassiveSkillEffect(Z_Param_Out_PassiveSkillData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnRemoveGloveBuff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveGloveBuff(Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnReversal)
	{
		P_GET_UBOOL(Z_Param_Reversal);
		P_GET_ENUM(ESpecialMovesType,Z_Param_SpecialMovesType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReversal(Z_Param_Reversal,ESpecialMovesType(Z_Param_SpecialMovesType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execOnReverseDirection)
	{
		P_GET_UBOOL(Z_Param_InReverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReverseDirection(Z_Param_InReverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execSetNativeParam)
	{
		P_GET_OBJECT(UELGaugeRoster,Z_Param_CurrentHUDRoster);
		P_GET_OBJECT(UELGaugeStatusIcon,Z_Param_StatusIcon);
		P_GET_OBJECT(UELGaugeFire,Z_Param_GaugeFire);
		P_GET_OBJECT(UCanvasPanel,Z_Param_GaugeMain);
		P_GET_OBJECT(UCanvasPanel,Z_Param_GaugeDiff);
		P_GET_OBJECT(UImage,Z_Param_HUDgaugeTex);
		P_GET_OBJECT(UImage,Z_Param_HUDgaugeDiffTex);
		P_GET_OBJECT(UImage,Z_Param_SpecialTex);
		P_GET_OBJECT(UImage,Z_Param_RingtimeTex);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_ColorDefault);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_ColorGrayout);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GaugeMainDefaultSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GaugeDiffDefaultSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeParam(Z_Param_CurrentHUDRoster,Z_Param_StatusIcon,Z_Param_GaugeFire,Z_Param_GaugeMain,Z_Param_GaugeDiff,Z_Param_HUDgaugeTex,Z_Param_HUDgaugeDiffTex,Z_Param_SpecialTex,Z_Param_RingtimeTex,Z_Param_ColorDefault,Z_Param_ColorGrayout,Z_Param_Out_GaugeMainDefaultSize,Z_Param_Out_GaugeDiffDefaultSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execSetTargetCharacterNative)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Character);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStatusInAnimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStatusOutAnimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InActionSkillAnimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamagePartAnimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InReversalAnimTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMeterValuePenaltyAnimTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCharacterNative(Z_Param_Character,Z_Param_InStatusInAnimTime,Z_Param_InStatusOutAnimTime,Z_Param_InActionSkillAnimTime,Z_Param_InDamagePartAnimTime,Z_Param_InReversalAnimTime,Z_Param_InMeterValuePenaltyAnimTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execUpdateDynamicParam_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDynamicParam_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameHUDHPGaugeBase::execUpdateGaugeColor_Native)
	{
		P_GET_OBJECT(UImage,Z_Param_HUDGauge);
		P_GET_OBJECT(UImage,Z_Param_HUDGaugeDiff);
		P_GET_OBJECT(UImage,Z_Param_SpecialTex);
		P_GET_OBJECT(UImage,Z_Param_RingtimeTex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGaugeColor_Native(Z_Param_HUDGauge,Z_Param_HUDGaugeDiff,Z_Param_SpecialTex,Z_Param_RingtimeTex);
		P_NATIVE_END;
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove = FName(TEXT("OnChangeCanOperateDownPinchMove"));
	void UELIngameHUDHPGaugeBase::OnChangeCanOperateDownPinchMove(bool Enable)
	{
		ELIngameHUDHPGaugeBase_eventOnChangeCanOperateDownPinchMove_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnChangeDangerState = FName(TEXT("OnChangeDangerState"));
	void UELIngameHUDHPGaugeBase::OnChangeDangerState(bool Enable)
	{
		ELIngameHUDHPGaugeBase_eventOnChangeDangerState_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnChangeDangerState),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnChangeExciteState = FName(TEXT("OnChangeExciteState"));
	void UELIngameHUDHPGaugeBase::OnChangeExciteState(bool Enable)
	{
		ELIngameHUDHPGaugeBase_eventOnChangeExciteState_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnChangeExciteState),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState = FName(TEXT("OnChangeRollOutDownState"));
	void UELIngameHUDHPGaugeBase::OnChangeRollOutDownState(bool Enable)
	{
		ELIngameHUDHPGaugeBase_eventOnChangeRollOutDownState_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnChangeSpecialState = FName(TEXT("OnChangeSpecialState"));
	void UELIngameHUDHPGaugeBase::OnChangeSpecialState(bool Enable)
	{
		ELIngameHUDHPGaugeBase_eventOnChangeSpecialState_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnChangeSpecialState),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger = FName(TEXT("OnLoopAnimationStartEvent_Danger"));
	void UELIngameHUDHPGaugeBase::OnLoopAnimationStartEvent_Danger()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger),NULL);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax = FName(TEXT("OnLoopAnimationStartEvent_GuageMax"));
	void UELIngameHUDHPGaugeBase::OnLoopAnimationStartEvent_GuageMax()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax),NULL);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special = FName(TEXT("OnLoopAnimationStartEvent_Special"));
	void UELIngameHUDHPGaugeBase::OnLoopAnimationStartEvent_Special()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special),NULL);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP = FName(TEXT("OnPlayAnimationActionSkill_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationActionSkill_BP(FCareerActionSkillData const& ActionSkillData, float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms Parms;
		Parms.ActionSkillData=ActionSkillData;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP = FName(TEXT("OnPlayAnimationMeterValuePenalty_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationMeterValuePenalty_BP(float PenaltyRate, float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms Parms;
		Parms.PenaltyRate=PenaltyRate;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP = FName(TEXT("OnPlayAnimationPartDamage_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationPartDamage_BP(FLinearColor PartsColor, uint8 LimbHPType, float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms Parms;
		Parms.PartsColor=PartsColor;
		Parms.LimbHPType=LimbHPType;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP = FName(TEXT("OnPlayAnimationPassiveSkill_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationPassiveSkill_BP(FStPassiveSkillData const& PassiveSkillData, float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms Parms;
		Parms.PassiveSkillData=PassiveSkillData;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP = FName(TEXT("OnPlayAnimationRemoveGlove_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationRemoveGlove_BP(float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationRemoveGlove_BP_Parms Parms;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP = FName(TEXT("OnPlayAnimationReversal_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationReversal_BP(bool Reversal, ESpecialMovesType SpecialMovesType, float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms Parms;
		Parms.Reversal=Reversal ? true : false;
		Parms.SpecialMovesType=SpecialMovesType;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP = FName(TEXT("OnPlayAnimationReverseDirection_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationReverseDirection_BP(bool InReverse, float LoopTime, bool Restart)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms Parms;
		Parms.InReverse=InReverse ? true : false;
		Parms.LoopTime=LoopTime;
		Parms.Restart=Restart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP = FName(TEXT("OnPlayAnimationRingTime_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayAnimationRingTime_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP),NULL);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP = FName(TEXT("OnPlayMomentumUpAnimation_BP"));
	void UELIngameHUDHPGaugeBase::OnPlayMomentumUpAnimation_BP(float MeterRate)
	{
		ELIngameHUDHPGaugeBase_eventOnPlayMomentumUpAnimation_BP_Parms Parms;
		Parms.MeterRate=MeterRate;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_Update_BP = FName(TEXT("Update_BP"));
	void UELIngameHUDHPGaugeBase::Update_BP(AELCharacter_Native* Player, float DeltaTime)
	{
		ELIngameHUDHPGaugeBase_eventUpdate_BP_Parms Parms;
		Parms.Player=Player;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_Update_BP),&Parms);
	}
	static FName NAME_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl = FName(TEXT("UpdateBattleRoyale_Impl"));
	void UELIngameHUDHPGaugeBase::UpdateBattleRoyale_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl),NULL);
	}
	void UELIngameHUDHPGaugeBase::StaticRegisterNativesUELIngameHUDHPGaugeBase()
	{
		UClass* Class = UELIngameHUDHPGaugeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGaugeMaterialParameter", &UELIngameHUDHPGaugeBase::execGetGaugeMaterialParameter },
			{ "GetGaugeTexture", &UELIngameHUDHPGaugeBase::execGetGaugeTexture },
			{ "IsDangerState", &UELIngameHUDHPGaugeBase::execIsDangerState },
			{ "IsExciteState", &UELIngameHUDHPGaugeBase::execIsExciteState },
			{ "IsSpecialState", &UELIngameHUDHPGaugeBase::execIsSpecialState },
			{ "OnAnimationFinishedEvent_DangerStart", &UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_DangerStart },
			{ "OnAnimationFinishedEvent_GuageMaxStart", &UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_GuageMaxStart },
			{ "OnAnimationFinishedEvent_RingTime", &UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_RingTime },
			{ "OnAnimationFinishedEvent_SpecialStart", &UELIngameHUDHPGaugeBase::execOnAnimationFinishedEvent_SpecialStart },
			{ "OnChangedTouchLeaveRingFlag", &UELIngameHUDHPGaugeBase::execOnChangedTouchLeaveRingFlag },
			{ "OnFinishedAnimation_StatusText", &UELIngameHUDHPGaugeBase::execOnFinishedAnimation_StatusText },
			{ "OnMeterValuePenalty", &UELIngameHUDHPGaugeBase::execOnMeterValuePenalty },
			{ "OnPlayActionSkill", &UELIngameHUDHPGaugeBase::execOnPlayActionSkill },
			{ "OnPlayPassiveSkillEffect", &UELIngameHUDHPGaugeBase::execOnPlayPassiveSkillEffect },
			{ "OnRemoveGloveBuff", &UELIngameHUDHPGaugeBase::execOnRemoveGloveBuff },
			{ "OnReversal", &UELIngameHUDHPGaugeBase::execOnReversal },
			{ "OnReverseDirection", &UELIngameHUDHPGaugeBase::execOnReverseDirection },
			{ "SetNativeParam", &UELIngameHUDHPGaugeBase::execSetNativeParam },
			{ "SetTargetCharacterNative", &UELIngameHUDHPGaugeBase::execSetTargetCharacterNative },
			{ "UpdateDynamicParam_N", &UELIngameHUDHPGaugeBase::execUpdateDynamicParam_N },
			{ "UpdateGaugeColor_Native", &UELIngameHUDHPGaugeBase::execUpdateGaugeColor_Native },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventGetGaugeMaterialParameter_Parms
		{
			float MainParam;
			float DiffParam;
			bool IsPlus;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MainParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffParam;
		static void NewProp_IsPlus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_MainParam = { "MainParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventGetGaugeMaterialParameter_Parms, MainParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_DiffParam = { "DiffParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventGetGaugeMaterialParameter_Parms, DiffParam), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_IsPlus_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventGetGaugeMaterialParameter_Parms*)Obj)->IsPlus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_IsPlus = { "IsPlus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeMaterialParameter_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_IsPlus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_MainParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_DiffParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::NewProp_IsPlus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "GetGaugeMaterialParameter", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeMaterialParameter_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms
		{
			bool NewIsExciteState;
			bool NewIsSpecialState;
			bool NewIsDangerState;
			bool IsKo;
			UTexture2D* ReturnValue;
		};
		static void NewProp_NewIsExciteState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsExciteState;
		static void NewProp_NewIsSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsSpecialState;
		static void NewProp_NewIsDangerState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsDangerState;
		static void NewProp_IsKo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsExciteState_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms*)Obj)->NewIsExciteState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsExciteState = { "NewIsExciteState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsExciteState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsSpecialState_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms*)Obj)->NewIsSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsSpecialState = { "NewIsSpecialState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsSpecialState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsDangerState_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms*)Obj)->NewIsDangerState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsDangerState = { "NewIsDangerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsDangerState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_IsKo_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms*)Obj)->IsKo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_IsKo = { "IsKo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_IsKo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsExciteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsSpecialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_NewIsDangerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_IsKo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "GetGaugeTexture", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventGetGaugeTexture_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventIsDangerState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventIsDangerState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventIsDangerState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "IsDangerState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventIsDangerState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventIsExciteState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventIsExciteState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventIsExciteState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "IsExciteState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventIsExciteState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventIsSpecialState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventIsSpecialState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventIsSpecialState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "IsSpecialState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventIsSpecialState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnAnimationFinishedEvent_DangerStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnAnimationFinishedEvent_GuageMaxStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnAnimationFinishedEvent_RingTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnAnimationFinishedEvent_SpecialStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnChangeCanOperateDownPinchMove_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnChangeCanOperateDownPinchMove_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnChangeCanOperateDownPinchMove", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnChangeCanOperateDownPinchMove_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnChangeDangerState_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnChangeDangerState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnChangeDangerState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnChangeDangerState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnChangedTouchLeaveRingFlag_Parms
		{
			bool Flag;
		};
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnChangedTouchLeaveRingFlag_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnChangedTouchLeaveRingFlag_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnChangedTouchLeaveRingFlag", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnChangedTouchLeaveRingFlag_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnChangeExciteState_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnChangeExciteState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnChangeExciteState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnChangeExciteState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnChangeRollOutDownState_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnChangeRollOutDownState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnChangeRollOutDownState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnChangeRollOutDownState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnChangeSpecialState_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnChangeSpecialState_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnChangeSpecialState", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnChangeSpecialState_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnFinishedAnimation_StatusText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnLoopAnimationStartEvent_Danger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnLoopAnimationStartEvent_GuageMax", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnLoopAnimationStartEvent_Special", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnMeterValuePenalty_Parms
		{
			float PenaltyRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenaltyRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::NewProp_PenaltyRate = { "PenaltyRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnMeterValuePenalty_Parms, PenaltyRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::NewProp_PenaltyRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnMeterValuePenalty", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnMeterValuePenalty_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnPlayActionSkill_Parms
		{
			int32 ActionSkillNo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionSkillNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::NewProp_ActionSkillNo = { "ActionSkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayActionSkill_Parms, ActionSkillNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::NewProp_ActionSkillNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayActionSkill", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayActionSkill_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionSkillData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_ActionSkillData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_ActionSkillData = { "ActionSkillData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms, ActionSkillData), Z_Construct_UScriptStruct_FCareerActionSkillData, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_ActionSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_ActionSkillData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_ActionSkillData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationActionSkill_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenaltyRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_PenaltyRate = { "PenaltyRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms, PenaltyRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_PenaltyRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationMeterValuePenalty_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartsColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimbHPType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_PartsColor = { "PartsColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms, PartsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_LimbHPType = { "LimbHPType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms, LimbHPType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_PartsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_LimbHPType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationPartDamage_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSkillData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_PassiveSkillData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_PassiveSkillData = { "PassiveSkillData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms, PassiveSkillData), Z_Construct_UScriptStruct_FStPassiveSkillData, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_PassiveSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_PassiveSkillData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_PassiveSkillData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationPassiveSkill_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationRemoveGlove_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationRemoveGlove_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationRemoveGlove_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationRemoveGlove_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationRemoveGlove_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics
	{
		static void NewProp_Reversal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reversal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialMovesType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialMovesType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Reversal_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms*)Obj)->Reversal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Reversal = { "Reversal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Reversal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_SpecialMovesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_SpecialMovesType = { "SpecialMovesType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms, SpecialMovesType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Reversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_SpecialMovesType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_SpecialMovesType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationReversal_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics
	{
		static void NewProp_InReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InReverse;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_InReverse_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms*)Obj)->InReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_InReverse = { "InReverse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_InReverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms, LoopTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_InReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::NewProp_Restart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationReverseDirection_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayAnimationRingTime_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeterRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::NewProp_MeterRate = { "MeterRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayMomentumUpAnimation_BP_Parms, MeterRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::NewProp_MeterRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayMomentumUpAnimation_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayMomentumUpAnimation_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnPlayPassiveSkillEffect_Parms
		{
			FStPassiveSkillData PassiveSkillData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSkillData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::NewProp_PassiveSkillData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::NewProp_PassiveSkillData = { "PassiveSkillData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnPlayPassiveSkillEffect_Parms, PassiveSkillData), Z_Construct_UScriptStruct_FStPassiveSkillData, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::NewProp_PassiveSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::NewProp_PassiveSkillData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::NewProp_PassiveSkillData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnPlayPassiveSkillEffect", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnPlayPassiveSkillEffect_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnRemoveGloveBuff_Parms
		{
			float InDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnRemoveGloveBuff_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnRemoveGloveBuff", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnRemoveGloveBuff_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnReversal_Parms
		{
			bool Reversal;
			ESpecialMovesType SpecialMovesType;
		};
		static void NewProp_Reversal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reversal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialMovesType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialMovesType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_Reversal_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnReversal_Parms*)Obj)->Reversal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_Reversal = { "Reversal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnReversal_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_Reversal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_SpecialMovesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_SpecialMovesType = { "SpecialMovesType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventOnReversal_Parms, SpecialMovesType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_Reversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_SpecialMovesType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::NewProp_SpecialMovesType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnReversal", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnReversal_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventOnReverseDirection_Parms
		{
			bool InReverse;
		};
		static void NewProp_InReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InReverse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::NewProp_InReverse_SetBit(void* Obj)
	{
		((ELIngameHUDHPGaugeBase_eventOnReverseDirection_Parms*)Obj)->InReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::NewProp_InReverse = { "InReverse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELIngameHUDHPGaugeBase_eventOnReverseDirection_Parms), &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::NewProp_InReverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::NewProp_InReverse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "OnReverseDirection", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventOnReverseDirection_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms
		{
			UELGaugeRoster* CurrentHUDRoster;
			UELGaugeStatusIcon* StatusIcon;
			UELGaugeFire* GaugeFire;
			UCanvasPanel* GaugeMain;
			UCanvasPanel* GaugeDiff;
			UImage* HUDgaugeTex;
			UImage* HUDgaugeDiffTex;
			UImage* SpecialTex;
			UImage* RingtimeTex;
			UWidgetAnimation* ColorDefault;
			UWidgetAnimation* ColorGrayout;
			FVector2D GaugeMainDefaultSize;
			FVector2D GaugeDiffDefaultSize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHUDRoster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHUDRoster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeMain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeMain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDgaugeTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDgaugeTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDgaugeDiffTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDgaugeDiffTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingtimeTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingtimeTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorDefault;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGrayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeMainDefaultSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GaugeMainDefaultSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeDiffDefaultSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GaugeDiffDefaultSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_CurrentHUDRoster_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_CurrentHUDRoster = { "CurrentHUDRoster", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, CurrentHUDRoster), Z_Construct_UClass_UELGaugeRoster_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_CurrentHUDRoster_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_CurrentHUDRoster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_StatusIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_StatusIcon = { "StatusIcon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, StatusIcon), Z_Construct_UClass_UELGaugeStatusIcon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_StatusIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_StatusIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeFire_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeFire = { "GaugeFire", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, GaugeFire), Z_Construct_UClass_UELGaugeFire_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMain = { "GaugeMain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, GaugeMain), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiff_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiff = { "GaugeDiff", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, GaugeDiff), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeTex_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeTex = { "HUDgaugeTex", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, HUDgaugeTex), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeDiffTex_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeDiffTex = { "HUDgaugeDiffTex", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, HUDgaugeDiffTex), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeDiffTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeDiffTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_SpecialTex_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_SpecialTex = { "SpecialTex", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, SpecialTex), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_SpecialTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_SpecialTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_RingtimeTex_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_RingtimeTex = { "RingtimeTex", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, RingtimeTex), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_RingtimeTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_RingtimeTex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_ColorDefault = { "ColorDefault", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, ColorDefault), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_ColorGrayout = { "ColorGrayout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, ColorGrayout), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMainDefaultSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMainDefaultSize = { "GaugeMainDefaultSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, GaugeMainDefaultSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMainDefaultSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMainDefaultSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiffDefaultSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiffDefaultSize = { "GaugeDiffDefaultSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms, GaugeDiffDefaultSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiffDefaultSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiffDefaultSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_CurrentHUDRoster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_StatusIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_HUDgaugeDiffTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_SpecialTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_RingtimeTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_ColorDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_ColorGrayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeMainDefaultSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::NewProp_GaugeDiffDefaultSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "SetNativeParam", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventSetNativeParam_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms
		{
			AELCharacter_Native* Character;
			float InStatusInAnimTime;
			float InStatusOutAnimTime;
			float InActionSkillAnimTime;
			float InDamagePartAnimTime;
			float InReversalAnimTime;
			float InMeterValuePenaltyAnimTime;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStatusInAnimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStatusOutAnimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InActionSkillAnimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDamagePartAnimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InReversalAnimTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMeterValuePenaltyAnimTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, Character), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InStatusInAnimTime = { "InStatusInAnimTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, InStatusInAnimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InStatusOutAnimTime = { "InStatusOutAnimTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, InStatusOutAnimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InActionSkillAnimTime = { "InActionSkillAnimTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, InActionSkillAnimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InDamagePartAnimTime = { "InDamagePartAnimTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, InDamagePartAnimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InReversalAnimTime = { "InReversalAnimTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, InReversalAnimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InMeterValuePenaltyAnimTime = { "InMeterValuePenaltyAnimTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms, InMeterValuePenaltyAnimTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InStatusInAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InStatusOutAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InActionSkillAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InDamagePartAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InReversalAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::NewProp_InMeterValuePenaltyAnimTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "SetTargetCharacterNative", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventSetTargetCharacterNative_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventUpdate_BP_Parms, Player), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventUpdate_BP_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "Update_BP", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventUpdate_BP_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "UpdateBattleRoyale_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "UpdateDynamicParam_N", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics
	{
		struct ELIngameHUDHPGaugeBase_eventUpdateGaugeColor_Native_Parms
		{
			UImage* HUDGauge;
			UImage* HUDGaugeDiff;
			UImage* SpecialTex;
			UImage* RingtimeTex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDGaugeDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDGaugeDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingtimeTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingtimeTex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGauge_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGauge = { "HUDGauge", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventUpdateGaugeColor_Native_Parms, HUDGauge), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGaugeDiff_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGaugeDiff = { "HUDGaugeDiff", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventUpdateGaugeColor_Native_Parms, HUDGaugeDiff), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGaugeDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGaugeDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_SpecialTex_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_SpecialTex = { "SpecialTex", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventUpdateGaugeColor_Native_Parms, SpecialTex), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_SpecialTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_SpecialTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_RingtimeTex_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_RingtimeTex = { "RingtimeTex", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDHPGaugeBase_eventUpdateGaugeColor_Native_Parms, RingtimeTex), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_RingtimeTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_RingtimeTex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_HUDGaugeDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_SpecialTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::NewProp_RingtimeTex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDHPGaugeBase, nullptr, "UpdateGaugeColor_Native", nullptr, nullptr, sizeof(ELIngameHUDHPGaugeBase_eventUpdateGaugeColor_Native_Parms), Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister()
	{
		return UELIngameHUDHPGaugeBase::StaticClass();
	}
	struct Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsGuageMaxStart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsGuageMaxStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsGuageMaxStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsGuageMaxLoop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsGuageMaxLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsGuageMaxLoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsGuageMaxStop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsGuageMaxStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsGuageMaxStop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsSpecialStart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsSpecialStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsSpecialStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsSpecialLoop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsSpecialLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsSpecialLoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsSpecialStop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsSpecialStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsSpecialStop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsDangerStart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsDangerStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsDangerStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsDangerLoop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsDangerLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsDangerLoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsDangerStop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsDangerStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsDangerStop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsRingTimeStart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsRingTimeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsRingTimeStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsRingTimeLoop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsRingTimeLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsRingTimeLoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationsRingTimeStop_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationsRingTimeStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationsRingTimeStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalGaugeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalGaugeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGaugeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxGaugeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialGaugeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialGaugeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DangerGaugeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DangerGaugeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOGaugeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOGaugeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OwnerPlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuryIconWidgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InjuryIconWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuryIconWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InjuryIconWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InjuryAnimations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuryAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InjuryAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerColorWidgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerColorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerColorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerColorWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeAnimation_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaugeAnimation_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeAnimation_AnimationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaugeAnimation_AnimationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTagActiveIcon_N_MetaData[];
#endif
		static void NewProp_bUseTagActiveIcon_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTagActiveIcon_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseEliminateCount_N_MetaData[];
#endif
		static void NewProp_UseEliminateCount_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseEliminateCount_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELIngameHUDBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeMaterialParameter, "GetGaugeMaterialParameter" }, // 25703546
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_GetGaugeTexture, "GetGaugeTexture" }, // 837536001
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsDangerState, "IsDangerState" }, // 2913838338
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsExciteState, "IsExciteState" }, // 3126668285
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_IsSpecialState, "IsSpecialState" }, // 1686133875
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_DangerStart, "OnAnimationFinishedEvent_DangerStart" }, // 1566111017
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_GuageMaxStart, "OnAnimationFinishedEvent_GuageMaxStart" }, // 2112335989
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_RingTime, "OnAnimationFinishedEvent_RingTime" }, // 2547346161
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnAnimationFinishedEvent_SpecialStart, "OnAnimationFinishedEvent_SpecialStart" }, // 2667375185
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeCanOperateDownPinchMove, "OnChangeCanOperateDownPinchMove" }, // 1873507577
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeDangerState, "OnChangeDangerState" }, // 3750073996
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangedTouchLeaveRingFlag, "OnChangedTouchLeaveRingFlag" }, // 276443276
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeExciteState, "OnChangeExciteState" }, // 504258526
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeRollOutDownState, "OnChangeRollOutDownState" }, // 2568905696
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnChangeSpecialState, "OnChangeSpecialState" }, // 2243776982
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnFinishedAnimation_StatusText, "OnFinishedAnimation_StatusText" }, // 3894495618
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Danger, "OnLoopAnimationStartEvent_Danger" }, // 2483583145
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_GuageMax, "OnLoopAnimationStartEvent_GuageMax" }, // 3437676304
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnLoopAnimationStartEvent_Special, "OnLoopAnimationStartEvent_Special" }, // 4169778791
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnMeterValuePenalty, "OnMeterValuePenalty" }, // 1102218868
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayActionSkill, "OnPlayActionSkill" }, // 1824246742
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationActionSkill_BP, "OnPlayAnimationActionSkill_BP" }, // 1659435817
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationMeterValuePenalty_BP, "OnPlayAnimationMeterValuePenalty_BP" }, // 2360213477
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPartDamage_BP, "OnPlayAnimationPartDamage_BP" }, // 791199450
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationPassiveSkill_BP, "OnPlayAnimationPassiveSkill_BP" }, // 3049129802
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRemoveGlove_BP, "OnPlayAnimationRemoveGlove_BP" }, // 1631537000
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReversal_BP, "OnPlayAnimationReversal_BP" }, // 3195291032
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationReverseDirection_BP, "OnPlayAnimationReverseDirection_BP" }, // 2635014088
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayAnimationRingTime_BP, "OnPlayAnimationRingTime_BP" }, // 1750084595
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayMomentumUpAnimation_BP, "OnPlayMomentumUpAnimation_BP" }, // 27714184
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnPlayPassiveSkillEffect, "OnPlayPassiveSkillEffect" }, // 3473993062
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnRemoveGloveBuff, "OnRemoveGloveBuff" }, // 1497507505
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReversal, "OnReversal" }, // 695303058
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_OnReverseDirection, "OnReverseDirection" }, // 2979123933
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetNativeParam, "SetNativeParam" }, // 2569470096
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_SetTargetCharacterNative, "SetTargetCharacterNative" }, // 600160886
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_Update_BP, "Update_BP" }, // 1199362681
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateBattleRoyale_Impl, "UpdateBattleRoyale_Impl" }, // 2291777756
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateDynamicParam_N, "UpdateDynamicParam_N" }, // 2448609619
		{ &Z_Construct_UFunction_UELIngameHUDHPGaugeBase_UpdateGaugeColor_Native, "UpdateGaugeColor_Native" }, // 1583595909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELIngameHUDHPGaugeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart_Inner = { "AnimationsGuageMaxStart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart = { "AnimationsGuageMaxStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsGuageMaxStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop_Inner = { "AnimationsGuageMaxLoop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop = { "AnimationsGuageMaxLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsGuageMaxLoop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop_Inner = { "AnimationsGuageMaxStop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop = { "AnimationsGuageMaxStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsGuageMaxStop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart_Inner = { "AnimationsSpecialStart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart = { "AnimationsSpecialStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsSpecialStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop_Inner = { "AnimationsSpecialLoop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop = { "AnimationsSpecialLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsSpecialLoop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop_Inner = { "AnimationsSpecialStop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop = { "AnimationsSpecialStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsSpecialStop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart_Inner = { "AnimationsDangerStart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart = { "AnimationsDangerStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsDangerStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop_Inner = { "AnimationsDangerLoop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop = { "AnimationsDangerLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsDangerLoop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop_Inner = { "AnimationsDangerStop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop = { "AnimationsDangerStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsDangerStop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart_Inner = { "AnimationsRingTimeStart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart = { "AnimationsRingTimeStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsRingTimeStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop_Inner = { "AnimationsRingTimeLoop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop = { "AnimationsRingTimeLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsRingTimeLoop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop_Inner = { "AnimationsRingTimeStop", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop = { "AnimationsRingTimeStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, AnimationsRingTimeStop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_NormalGaugeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_NormalGaugeTexture = { "NormalGaugeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, NormalGaugeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_NormalGaugeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_NormalGaugeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_MaxGaugeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_MaxGaugeTexture = { "MaxGaugeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, MaxGaugeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_MaxGaugeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_MaxGaugeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_SpecialGaugeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_SpecialGaugeTexture = { "SpecialGaugeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, SpecialGaugeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_SpecialGaugeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_SpecialGaugeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_DangerGaugeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_DangerGaugeTexture = { "DangerGaugeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, DangerGaugeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_DangerGaugeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_DangerGaugeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_KOGaugeTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_KOGaugeTexture = { "KOGaugeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, KOGaugeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_KOGaugeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_KOGaugeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_OwnerPlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_OwnerPlayerIndex = { "OwnerPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, OwnerPlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_OwnerPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_OwnerPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_Inner = { "InjuryIconWidgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets = { "InjuryIconWidgets", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, InjuryIconWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations_Inner = { "InjuryAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations = { "InjuryAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, InjuryAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_Inner = { "PlayerColorWidgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets = { "PlayerColorWidgets", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, PlayerColorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_ParameterDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_ParameterDataTable = { "ParameterDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, ParameterDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_ParameterDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_ParameterDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_DelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_DelayTime = { "GaugeAnimation_DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, GaugeAnimation_DelayTime), METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_AnimationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_AnimationSpeed = { "GaugeAnimation_AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDHPGaugeBase, GaugeAnimation_AnimationSpeed), METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_AnimationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_AnimationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	void Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N_SetBit(void* Obj)
	{
		((UELIngameHUDHPGaugeBase*)Obj)->bUseTagActiveIcon_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N = { "bUseTagActiveIcon_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELIngameHUDHPGaugeBase), &Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDHPGaugeBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDHPGaugeBase.h" },
	};
#endif
	void Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N_SetBit(void* Obj)
	{
		((UELIngameHUDHPGaugeBase*)Obj)->UseEliminateCount_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N = { "UseEliminateCount_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELIngameHUDHPGaugeBase), &Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsGuageMaxStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsSpecialStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsDangerStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_AnimationsRingTimeStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_NormalGaugeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_MaxGaugeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_SpecialGaugeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_DangerGaugeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_KOGaugeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_OwnerPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryIconWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_InjuryAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_PlayerColorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_ParameterDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_GaugeAnimation_AnimationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_bUseTagActiveIcon_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::NewProp_UseEliminateCount_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELIngameHUDHPGaugeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::ClassParams = {
		&UELIngameHUDHPGaugeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELIngameHUDHPGaugeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELIngameHUDHPGaugeBase, 2392006034);
	template<> ABP_200508_API UClass* StaticClass<UELIngameHUDHPGaugeBase>()
	{
		return UELIngameHUDHPGaugeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELIngameHUDHPGaugeBase(Z_Construct_UClass_UELIngameHUDHPGaugeBase, &UELIngameHUDHPGaugeBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELIngameHUDHPGaugeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELIngameHUDHPGaugeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
