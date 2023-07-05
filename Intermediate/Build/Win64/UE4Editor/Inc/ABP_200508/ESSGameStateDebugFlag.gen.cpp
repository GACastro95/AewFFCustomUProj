// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSGameStateDebugFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSGameStateDebugFlag() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSGameStateDebugFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSGameStateDebugFlag"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSGameStateDebugFlag>()
	{
		return ESSGameStateDebugFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSGameStateDebugFlag(ESSGameStateDebugFlag_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSGameStateDebugFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag_Hash() { return 657921164U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSGameStateDebugFlag"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSGameStateDebugFlag::None", (int64)ESSGameStateDebugFlag::None },
				{ "ESSGameStateDebugFlag::AIPlayerAutoKill", (int64)ESSGameStateDebugFlag::AIPlayerAutoKill },
				{ "ESSGameStateDebugFlag::AIPlayerNoDamage", (int64)ESSGameStateDebugFlag::AIPlayerNoDamage },
				{ "ESSGameStateDebugFlag::StartAssemble", (int64)ESSGameStateDebugFlag::StartAssemble },
				{ "ESSGameStateDebugFlag::Profiling", (int64)ESSGameStateDebugFlag::Profiling },
				{ "ESSGameStateDebugFlag::AIAutoInput_MoveForward", (int64)ESSGameStateDebugFlag::AIAutoInput_MoveForward },
				{ "ESSGameStateDebugFlag::AIAutoInput_MoveRotate", (int64)ESSGameStateDebugFlag::AIAutoInput_MoveRotate },
				{ "ESSGameStateDebugFlag::AIAutoInput_MoveToTarget", (int64)ESSGameStateDebugFlag::AIAutoInput_MoveToTarget },
				{ "ESSGameStateDebugFlag::AIAutoInput_Guard", (int64)ESSGameStateDebugFlag::AIAutoInput_Guard },
				{ "ESSGameStateDebugFlag::AIAutoInput_Jump", (int64)ESSGameStateDebugFlag::AIAutoInput_Jump },
				{ "ESSGameStateDebugFlag::AIAutoInput_AirJump", (int64)ESSGameStateDebugFlag::AIAutoInput_AirJump },
				{ "ESSGameStateDebugFlag::AIAutoInput_Attack", (int64)ESSGameStateDebugFlag::AIAutoInput_Attack },
				{ "ESSGameStateDebugFlag::AIAutoInput_AirAttack", (int64)ESSGameStateDebugFlag::AIAutoInput_AirAttack },
				{ "ESSGameStateDebugFlag::CreateSituationForProfiling_TypeA", (int64)ESSGameStateDebugFlag::CreateSituationForProfiling_TypeA },
				{ "ESSGameStateDebugFlag::CreateSituationForProfiling_TypeB", (int64)ESSGameStateDebugFlag::CreateSituationForProfiling_TypeB },
				{ "ESSGameStateDebugFlag::CreateSituationForProfiling_TypeC", (int64)ESSGameStateDebugFlag::CreateSituationForProfiling_TypeC },
				{ "ESSGameStateDebugFlag::TimeoutDurationExtend", (int64)ESSGameStateDebugFlag::TimeoutDurationExtend },
				{ "ESSGameStateDebugFlag::AIDisableAll", (int64)ESSGameStateDebugFlag::AIDisableAll },
				{ "ESSGameStateDebugFlag::BlockSaveAnalyticsLog", (int64)ESSGameStateDebugFlag::BlockSaveAnalyticsLog },
				{ "ESSGameStateDebugFlag::Max", (int64)ESSGameStateDebugFlag::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIAutoInput_AirAttack.Name", "ESSGameStateDebugFlag::AIAutoInput_AirAttack" },
				{ "AIAutoInput_AirJump.Name", "ESSGameStateDebugFlag::AIAutoInput_AirJump" },
				{ "AIAutoInput_Attack.Name", "ESSGameStateDebugFlag::AIAutoInput_Attack" },
				{ "AIAutoInput_Guard.Name", "ESSGameStateDebugFlag::AIAutoInput_Guard" },
				{ "AIAutoInput_Jump.Name", "ESSGameStateDebugFlag::AIAutoInput_Jump" },
				{ "AIAutoInput_MoveForward.Name", "ESSGameStateDebugFlag::AIAutoInput_MoveForward" },
				{ "AIAutoInput_MoveRotate.Name", "ESSGameStateDebugFlag::AIAutoInput_MoveRotate" },
				{ "AIAutoInput_MoveToTarget.Name", "ESSGameStateDebugFlag::AIAutoInput_MoveToTarget" },
				{ "AIDisableAll.Name", "ESSGameStateDebugFlag::AIDisableAll" },
				{ "AIPlayerAutoKill.Name", "ESSGameStateDebugFlag::AIPlayerAutoKill" },
				{ "AIPlayerNoDamage.Name", "ESSGameStateDebugFlag::AIPlayerNoDamage" },
				{ "BlockSaveAnalyticsLog.Name", "ESSGameStateDebugFlag::BlockSaveAnalyticsLog" },
				{ "BlueprintType", "true" },
				{ "CreateSituationForProfiling_TypeA.Name", "ESSGameStateDebugFlag::CreateSituationForProfiling_TypeA" },
				{ "CreateSituationForProfiling_TypeB.Name", "ESSGameStateDebugFlag::CreateSituationForProfiling_TypeB" },
				{ "CreateSituationForProfiling_TypeC.Name", "ESSGameStateDebugFlag::CreateSituationForProfiling_TypeC" },
				{ "Max.Name", "ESSGameStateDebugFlag::Max" },
				{ "ModuleRelativePath", "Public/ESSGameStateDebugFlag.h" },
				{ "None.Name", "ESSGameStateDebugFlag::None" },
				{ "Profiling.Name", "ESSGameStateDebugFlag::Profiling" },
				{ "StartAssemble.Name", "ESSGameStateDebugFlag::StartAssemble" },
				{ "TimeoutDurationExtend.Name", "ESSGameStateDebugFlag::TimeoutDurationExtend" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSGameStateDebugFlag",
				"ESSGameStateDebugFlag",
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
