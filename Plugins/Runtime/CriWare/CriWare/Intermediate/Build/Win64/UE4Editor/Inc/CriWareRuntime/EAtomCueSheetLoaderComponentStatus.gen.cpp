// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomCueSheetLoaderComponentStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomCueSheetLoaderComponentStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomCueSheetLoaderComponentStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomCueSheetLoaderComponentStatus"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomCueSheetLoaderComponentStatus>()
	{
		return EAtomCueSheetLoaderComponentStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomCueSheetLoaderComponentStatus(EAtomCueSheetLoaderComponentStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomCueSheetLoaderComponentStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Hash() { return 1909037673U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomCueSheetLoaderComponentStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomCueSheetLoaderComponentStatus::Stop", (int64)EAtomCueSheetLoaderComponentStatus::Stop },
				{ "EAtomCueSheetLoaderComponentStatus::Loading", (int64)EAtomCueSheetLoaderComponentStatus::Loading },
				{ "EAtomCueSheetLoaderComponentStatus::LoadEnd", (int64)EAtomCueSheetLoaderComponentStatus::LoadEnd },
				{ "EAtomCueSheetLoaderComponentStatus::Serializing", (int64)EAtomCueSheetLoaderComponentStatus::Serializing },
				{ "EAtomCueSheetLoaderComponentStatus::SerializeEnd", (int64)EAtomCueSheetLoaderComponentStatus::SerializeEnd },
				{ "EAtomCueSheetLoaderComponentStatus::Binding", (int64)EAtomCueSheetLoaderComponentStatus::Binding },
				{ "EAtomCueSheetLoaderComponentStatus::BindEnd", (int64)EAtomCueSheetLoaderComponentStatus::BindEnd },
				{ "EAtomCueSheetLoaderComponentStatus::LoadCueSheet", (int64)EAtomCueSheetLoaderComponentStatus::LoadCueSheet },
				{ "EAtomCueSheetLoaderComponentStatus::Complete", (int64)EAtomCueSheetLoaderComponentStatus::Complete },
				{ "EAtomCueSheetLoaderComponentStatus::Error", (int64)EAtomCueSheetLoaderComponentStatus::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BindEnd.Name", "EAtomCueSheetLoaderComponentStatus::BindEnd" },
				{ "Binding.Name", "EAtomCueSheetLoaderComponentStatus::Binding" },
				{ "BlueprintType", "true" },
				{ "Complete.Name", "EAtomCueSheetLoaderComponentStatus::Complete" },
				{ "Error.Name", "EAtomCueSheetLoaderComponentStatus::Error" },
				{ "LoadCueSheet.Name", "EAtomCueSheetLoaderComponentStatus::LoadCueSheet" },
				{ "LoadEnd.Name", "EAtomCueSheetLoaderComponentStatus::LoadEnd" },
				{ "Loading.Name", "EAtomCueSheetLoaderComponentStatus::Loading" },
				{ "ModuleRelativePath", "Public/EAtomCueSheetLoaderComponentStatus.h" },
				{ "SerializeEnd.Name", "EAtomCueSheetLoaderComponentStatus::SerializeEnd" },
				{ "Serializing.Name", "EAtomCueSheetLoaderComponentStatus::Serializing" },
				{ "Stop.Name", "EAtomCueSheetLoaderComponentStatus::Stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomCueSheetLoaderComponentStatus",
				"EAtomCueSheetLoaderComponentStatus",
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
