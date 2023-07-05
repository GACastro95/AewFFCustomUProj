// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaComponentStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaComponentStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentStatus"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentStatus>()
	{
		return EManaComponentStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaComponentStatus(EManaComponentStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaComponentStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Hash() { return 4272136320U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaComponentStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaComponentStatus::Stop", (int64)EManaComponentStatus::Stop },
				{ "EManaComponentStatus::DecHdr", (int64)EManaComponentStatus::DecHdr },
				{ "EManaComponentStatus::WaitPrep", (int64)EManaComponentStatus::WaitPrep },
				{ "EManaComponentStatus::Prep", (int64)EManaComponentStatus::Prep },
				{ "EManaComponentStatus::Ready", (int64)EManaComponentStatus::Ready },
				{ "EManaComponentStatus::Playing", (int64)EManaComponentStatus::Playing },
				{ "EManaComponentStatus::PlayEnd", (int64)EManaComponentStatus::PlayEnd },
				{ "EManaComponentStatus::Error", (int64)EManaComponentStatus::Error },
				{ "EManaComponentStatus::StopProcessing", (int64)EManaComponentStatus::StopProcessing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DecHdr.Name", "EManaComponentStatus::DecHdr" },
				{ "Error.Name", "EManaComponentStatus::Error" },
				{ "ModuleRelativePath", "Public/EManaComponentStatus.h" },
				{ "PlayEnd.Name", "EManaComponentStatus::PlayEnd" },
				{ "Playing.Name", "EManaComponentStatus::Playing" },
				{ "Prep.Name", "EManaComponentStatus::Prep" },
				{ "Ready.Name", "EManaComponentStatus::Ready" },
				{ "Stop.Name", "EManaComponentStatus::Stop" },
				{ "StopProcessing.Name", "EManaComponentStatus::StopProcessing" },
				{ "WaitPrep.Name", "EManaComponentStatus::WaitPrep" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaComponentStatus",
				"EManaComponentStatus",
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
