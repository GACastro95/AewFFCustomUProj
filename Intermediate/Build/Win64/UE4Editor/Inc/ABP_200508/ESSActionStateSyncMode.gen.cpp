// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSActionStateSyncMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSActionStateSyncMode() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSActionStateSyncMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSActionStateSyncMode"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSActionStateSyncMode>()
	{
		return ESSActionStateSyncMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSActionStateSyncMode(ESSActionStateSyncMode_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSActionStateSyncMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode_Hash() { return 633653660U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSActionStateSyncMode"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSActionStateSyncMode::Predict", (int64)ESSActionStateSyncMode::Predict },
				{ "ESSActionStateSyncMode::Delay", (int64)ESSActionStateSyncMode::Delay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Delay.Name", "ESSActionStateSyncMode::Delay" },
				{ "ModuleRelativePath", "Public/ESSActionStateSyncMode.h" },
				{ "Predict.Name", "ESSActionStateSyncMode::Predict" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSActionStateSyncMode",
				"ESSActionStateSyncMode",
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
