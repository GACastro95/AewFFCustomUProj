// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerEventState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerEventState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerEventState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerEventState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerEventState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerEventState>()
	{
		return ECareerEventState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerEventState(ECareerEventState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerEventState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerEventState_Hash() { return 303326500U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerEventState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerEventState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerEventState::ECareerEventState_None", (int64)ECareerEventState::ECareerEventState_None },
				{ "ECareerEventState::ECareerEventState_WaitFadeIn", (int64)ECareerEventState::ECareerEventState_WaitFadeIn },
				{ "ECareerEventState::ECareerEventState_EventStart", (int64)ECareerEventState::ECareerEventState_EventStart },
				{ "ECareerEventState::ECareerEventState_EventTitle", (int64)ECareerEventState::ECareerEventState_EventTitle },
				{ "ECareerEventState::ECareerEventState_EventTitleWait", (int64)ECareerEventState::ECareerEventState_EventTitleWait },
				{ "ECareerEventState::ECareerEventState_EventTitleEnd", (int64)ECareerEventState::ECareerEventState_EventTitleEnd },
				{ "ECareerEventState::ECareerEventState_EventContinue", (int64)ECareerEventState::ECareerEventState_EventContinue },
				{ "ECareerEventState::ECareerEventState_EventContinue_CheckTutorial", (int64)ECareerEventState::ECareerEventState_EventContinue_CheckTutorial },
				{ "ECareerEventState::ECareerEventState_EventMessageStart", (int64)ECareerEventState::ECareerEventState_EventMessageStart },
				{ "ECareerEventState::ECareerEventState_EventMessage", (int64)ECareerEventState::ECareerEventState_EventMessage },
				{ "ECareerEventState::ECareerEventState_EventMessageEnd", (int64)ECareerEventState::ECareerEventState_EventMessageEnd },
				{ "ECareerEventState::ECareerEventState_EventChoices", (int64)ECareerEventState::ECareerEventState_EventChoices },
				{ "ECareerEventState::ECareerEventState_EventChoicesEnd", (int64)ECareerEventState::ECareerEventState_EventChoicesEnd },
				{ "ECareerEventState::ECareerEventState_EventEndCheck", (int64)ECareerEventState::ECareerEventState_EventEndCheck },
				{ "ECareerEventState::ECareerEventState_EventSkip_StartFadeOut", (int64)ECareerEventState::ECareerEventState_EventSkip_StartFadeOut },
				{ "ECareerEventState::ECareerEventState_EventSkip_Message", (int64)ECareerEventState::ECareerEventState_EventSkip_Message },
				{ "ECareerEventState::ECareerEventState_EventSkip_StartFadeIn", (int64)ECareerEventState::ECareerEventState_EventSkip_StartFadeIn },
				{ "ECareerEventState::ECareerEventState_EventSkip_NextState", (int64)ECareerEventState::ECareerEventState_EventSkip_NextState },
				{ "ECareerEventState::ECareerEventState_EventResult", (int64)ECareerEventState::ECareerEventState_EventResult },
				{ "ECareerEventState::ECareerEventState_EventResultEnd", (int64)ECareerEventState::ECareerEventState_EventResultEnd },
				{ "ECareerEventState::ECareerEventState_RewardPrepare", (int64)ECareerEventState::ECareerEventState_RewardPrepare },
				{ "ECareerEventState::ECareerEventState_RewardGet", (int64)ECareerEventState::ECareerEventState_RewardGet },
				{ "ECareerEventState::ECareerEventState_RewardEnd", (int64)ECareerEventState::ECareerEventState_RewardEnd },
				{ "ECareerEventState::ECareerEventState_SnapShotStart", (int64)ECareerEventState::ECareerEventState_SnapShotStart },
				{ "ECareerEventState::ECareerEventState_SnapShotPrepare", (int64)ECareerEventState::ECareerEventState_SnapShotPrepare },
				{ "ECareerEventState::ECareerEventState_SnapShotTimeAdjust", (int64)ECareerEventState::ECareerEventState_SnapShotTimeAdjust },
				{ "ECareerEventState::ECareerEventState_SnapShotCapture", (int64)ECareerEventState::ECareerEventState_SnapShotCapture },
				{ "ECareerEventState::ECareerEventState_SnapShotCapture_Wait", (int64)ECareerEventState::ECareerEventState_SnapShotCapture_Wait },
				{ "ECareerEventState::ECareerEventState_SnapShotTake", (int64)ECareerEventState::ECareerEventState_SnapShotTake },
				{ "ECareerEventState::ECareerEventState_SnapShotEnd", (int64)ECareerEventState::ECareerEventState_SnapShotEnd },
				{ "ECareerEventState::ECareerEventState_SelectDatePartner", (int64)ECareerEventState::ECareerEventState_SelectDatePartner },
				{ "ECareerEventState::ECareerEventState_ReportMenu", (int64)ECareerEventState::ECareerEventState_ReportMenu },
				{ "ECareerEventState::ECareerEventState_StoryEndCheck", (int64)ECareerEventState::ECareerEventState_StoryEndCheck },
				{ "ECareerEventState::ECareerEventState_CheckTutorial", (int64)ECareerEventState::ECareerEventState_CheckTutorial },
				{ "ECareerEventState::ECareerEventState_StoryEnd", (int64)ECareerEventState::ECareerEventState_StoryEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECareerEventState_CheckTutorial.Name", "ECareerEventState::ECareerEventState_CheckTutorial" },
				{ "ECareerEventState_EventChoices.Name", "ECareerEventState::ECareerEventState_EventChoices" },
				{ "ECareerEventState_EventChoicesEnd.Name", "ECareerEventState::ECareerEventState_EventChoicesEnd" },
				{ "ECareerEventState_EventContinue.Name", "ECareerEventState::ECareerEventState_EventContinue" },
				{ "ECareerEventState_EventContinue_CheckTutorial.Name", "ECareerEventState::ECareerEventState_EventContinue_CheckTutorial" },
				{ "ECareerEventState_EventEndCheck.Name", "ECareerEventState::ECareerEventState_EventEndCheck" },
				{ "ECareerEventState_EventMessage.Name", "ECareerEventState::ECareerEventState_EventMessage" },
				{ "ECareerEventState_EventMessageEnd.Name", "ECareerEventState::ECareerEventState_EventMessageEnd" },
				{ "ECareerEventState_EventMessageStart.Name", "ECareerEventState::ECareerEventState_EventMessageStart" },
				{ "ECareerEventState_EventResult.Name", "ECareerEventState::ECareerEventState_EventResult" },
				{ "ECareerEventState_EventResultEnd.Name", "ECareerEventState::ECareerEventState_EventResultEnd" },
				{ "ECareerEventState_EventSkip_Message.Name", "ECareerEventState::ECareerEventState_EventSkip_Message" },
				{ "ECareerEventState_EventSkip_NextState.Name", "ECareerEventState::ECareerEventState_EventSkip_NextState" },
				{ "ECareerEventState_EventSkip_StartFadeIn.Name", "ECareerEventState::ECareerEventState_EventSkip_StartFadeIn" },
				{ "ECareerEventState_EventSkip_StartFadeOut.Name", "ECareerEventState::ECareerEventState_EventSkip_StartFadeOut" },
				{ "ECareerEventState_EventStart.Name", "ECareerEventState::ECareerEventState_EventStart" },
				{ "ECareerEventState_EventTitle.Name", "ECareerEventState::ECareerEventState_EventTitle" },
				{ "ECareerEventState_EventTitleEnd.Name", "ECareerEventState::ECareerEventState_EventTitleEnd" },
				{ "ECareerEventState_EventTitleWait.Name", "ECareerEventState::ECareerEventState_EventTitleWait" },
				{ "ECareerEventState_None.Name", "ECareerEventState::ECareerEventState_None" },
				{ "ECareerEventState_ReportMenu.Name", "ECareerEventState::ECareerEventState_ReportMenu" },
				{ "ECareerEventState_RewardEnd.Name", "ECareerEventState::ECareerEventState_RewardEnd" },
				{ "ECareerEventState_RewardGet.Name", "ECareerEventState::ECareerEventState_RewardGet" },
				{ "ECareerEventState_RewardPrepare.Name", "ECareerEventState::ECareerEventState_RewardPrepare" },
				{ "ECareerEventState_SelectDatePartner.Name", "ECareerEventState::ECareerEventState_SelectDatePartner" },
				{ "ECareerEventState_SnapShotCapture.Name", "ECareerEventState::ECareerEventState_SnapShotCapture" },
				{ "ECareerEventState_SnapShotCapture_Wait.Name", "ECareerEventState::ECareerEventState_SnapShotCapture_Wait" },
				{ "ECareerEventState_SnapShotEnd.Name", "ECareerEventState::ECareerEventState_SnapShotEnd" },
				{ "ECareerEventState_SnapShotPrepare.Name", "ECareerEventState::ECareerEventState_SnapShotPrepare" },
				{ "ECareerEventState_SnapShotStart.Name", "ECareerEventState::ECareerEventState_SnapShotStart" },
				{ "ECareerEventState_SnapShotTake.Name", "ECareerEventState::ECareerEventState_SnapShotTake" },
				{ "ECareerEventState_SnapShotTimeAdjust.Name", "ECareerEventState::ECareerEventState_SnapShotTimeAdjust" },
				{ "ECareerEventState_StoryEnd.Name", "ECareerEventState::ECareerEventState_StoryEnd" },
				{ "ECareerEventState_StoryEndCheck.Name", "ECareerEventState::ECareerEventState_StoryEndCheck" },
				{ "ECareerEventState_WaitFadeIn.Name", "ECareerEventState::ECareerEventState_WaitFadeIn" },
				{ "ModuleRelativePath", "Public/ECareerEventState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerEventState",
				"ECareerEventState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
