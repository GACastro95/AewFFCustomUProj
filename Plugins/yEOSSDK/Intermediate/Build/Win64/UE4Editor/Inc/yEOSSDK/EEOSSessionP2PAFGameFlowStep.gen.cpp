// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionP2PAFGameFlowStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionP2PAFGameFlowStep() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionP2PAFGameFlowStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionP2PAFGameFlowStep"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PAFGameFlowStep>()
	{
		return EEOSSessionP2PAFGameFlowStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionP2PAFGameFlowStep(EEOSSessionP2PAFGameFlowStep_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionP2PAFGameFlowStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep_Hash() { return 3855337514U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionP2PAFGameFlowStep"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionP2PAFGameFlowStep::None", (int64)EEOSSessionP2PAFGameFlowStep::None },
				{ "EEOSSessionP2PAFGameFlowStep::Initialized", (int64)EEOSSessionP2PAFGameFlowStep::Initialized },
				{ "EEOSSessionP2PAFGameFlowStep::BeginCheckLatency", (int64)EEOSSessionP2PAFGameFlowStep::BeginCheckLatency },
				{ "EEOSSessionP2PAFGameFlowStep::EndCheckLatency", (int64)EEOSSessionP2PAFGameFlowStep::EndCheckLatency },
				{ "EEOSSessionP2PAFGameFlowStep::BeginSyncGameClock", (int64)EEOSSessionP2PAFGameFlowStep::BeginSyncGameClock },
				{ "EEOSSessionP2PAFGameFlowStep::EndSyncGameClock", (int64)EEOSSessionP2PAFGameFlowStep::EndSyncGameClock },
				{ "EEOSSessionP2PAFGameFlowStep::BeginDistributeMatchData", (int64)EEOSSessionP2PAFGameFlowStep::BeginDistributeMatchData },
				{ "EEOSSessionP2PAFGameFlowStep::EndDistributeMatchData", (int64)EEOSSessionP2PAFGameFlowStep::EndDistributeMatchData },
				{ "EEOSSessionP2PAFGameFlowStep::BeginInterchangeMatchData", (int64)EEOSSessionP2PAFGameFlowStep::BeginInterchangeMatchData },
				{ "EEOSSessionP2PAFGameFlowStep::EndInterchangeMatchData", (int64)EEOSSessionP2PAFGameFlowStep::EndInterchangeMatchData },
				{ "EEOSSessionP2PAFGameFlowStep::Busy", (int64)EEOSSessionP2PAFGameFlowStep::Busy },
				{ "EEOSSessionP2PAFGameFlowStep::Ready", (int64)EEOSSessionP2PAFGameFlowStep::Ready },
				{ "EEOSSessionP2PAFGameFlowStep::BeginStartMatch", (int64)EEOSSessionP2PAFGameFlowStep::BeginStartMatch },
				{ "EEOSSessionP2PAFGameFlowStep::StartedMatch", (int64)EEOSSessionP2PAFGameFlowStep::StartedMatch },
				{ "EEOSSessionP2PAFGameFlowStep::BeginPauseMatch", (int64)EEOSSessionP2PAFGameFlowStep::BeginPauseMatch },
				{ "EEOSSessionP2PAFGameFlowStep::PausedMatch", (int64)EEOSSessionP2PAFGameFlowStep::PausedMatch },
				{ "EEOSSessionP2PAFGameFlowStep::BeginResumeMatch", (int64)EEOSSessionP2PAFGameFlowStep::BeginResumeMatch },
				{ "EEOSSessionP2PAFGameFlowStep::BeginFinishMatch", (int64)EEOSSessionP2PAFGameFlowStep::BeginFinishMatch },
				{ "EEOSSessionP2PAFGameFlowStep::FinishedMatch", (int64)EEOSSessionP2PAFGameFlowStep::FinishedMatch },
				{ "EEOSSessionP2PAFGameFlowStep::BeginSyncGameResult", (int64)EEOSSessionP2PAFGameFlowStep::BeginSyncGameResult },
				{ "EEOSSessionP2PAFGameFlowStep::EndSyncGameResult", (int64)EEOSSessionP2PAFGameFlowStep::EndSyncGameResult },
				{ "EEOSSessionP2PAFGameFlowStep::BeginJoinInProgress", (int64)EEOSSessionP2PAFGameFlowStep::BeginJoinInProgress },
				{ "EEOSSessionP2PAFGameFlowStep::EndJoinInProgress", (int64)EEOSSessionP2PAFGameFlowStep::EndJoinInProgress },
				{ "EEOSSessionP2PAFGameFlowStep::BeginQuitSession", (int64)EEOSSessionP2PAFGameFlowStep::BeginQuitSession },
				{ "EEOSSessionP2PAFGameFlowStep::EndQuitSession", (int64)EEOSSessionP2PAFGameFlowStep::EndQuitSession },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeginCheckLatency.Name", "EEOSSessionP2PAFGameFlowStep::BeginCheckLatency" },
				{ "BeginDistributeMatchData.Name", "EEOSSessionP2PAFGameFlowStep::BeginDistributeMatchData" },
				{ "BeginFinishMatch.Name", "EEOSSessionP2PAFGameFlowStep::BeginFinishMatch" },
				{ "BeginInterchangeMatchData.Name", "EEOSSessionP2PAFGameFlowStep::BeginInterchangeMatchData" },
				{ "BeginJoinInProgress.Name", "EEOSSessionP2PAFGameFlowStep::BeginJoinInProgress" },
				{ "BeginPauseMatch.Name", "EEOSSessionP2PAFGameFlowStep::BeginPauseMatch" },
				{ "BeginQuitSession.Name", "EEOSSessionP2PAFGameFlowStep::BeginQuitSession" },
				{ "BeginResumeMatch.Name", "EEOSSessionP2PAFGameFlowStep::BeginResumeMatch" },
				{ "BeginStartMatch.Name", "EEOSSessionP2PAFGameFlowStep::BeginStartMatch" },
				{ "BeginSyncGameClock.Name", "EEOSSessionP2PAFGameFlowStep::BeginSyncGameClock" },
				{ "BeginSyncGameResult.Name", "EEOSSessionP2PAFGameFlowStep::BeginSyncGameResult" },
				{ "BlueprintType", "true" },
				{ "Busy.Name", "EEOSSessionP2PAFGameFlowStep::Busy" },
				{ "EndCheckLatency.Name", "EEOSSessionP2PAFGameFlowStep::EndCheckLatency" },
				{ "EndDistributeMatchData.Name", "EEOSSessionP2PAFGameFlowStep::EndDistributeMatchData" },
				{ "EndInterchangeMatchData.Name", "EEOSSessionP2PAFGameFlowStep::EndInterchangeMatchData" },
				{ "EndJoinInProgress.Name", "EEOSSessionP2PAFGameFlowStep::EndJoinInProgress" },
				{ "EndQuitSession.Name", "EEOSSessionP2PAFGameFlowStep::EndQuitSession" },
				{ "EndSyncGameClock.Name", "EEOSSessionP2PAFGameFlowStep::EndSyncGameClock" },
				{ "EndSyncGameResult.Name", "EEOSSessionP2PAFGameFlowStep::EndSyncGameResult" },
				{ "FinishedMatch.Name", "EEOSSessionP2PAFGameFlowStep::FinishedMatch" },
				{ "Initialized.Name", "EEOSSessionP2PAFGameFlowStep::Initialized" },
				{ "ModuleRelativePath", "Public/EEOSSessionP2PAFGameFlowStep.h" },
				{ "None.Name", "EEOSSessionP2PAFGameFlowStep::None" },
				{ "PausedMatch.Name", "EEOSSessionP2PAFGameFlowStep::PausedMatch" },
				{ "Ready.Name", "EEOSSessionP2PAFGameFlowStep::Ready" },
				{ "StartedMatch.Name", "EEOSSessionP2PAFGameFlowStep::StartedMatch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionP2PAFGameFlowStep",
				"EEOSSessionP2PAFGameFlowStep",
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
