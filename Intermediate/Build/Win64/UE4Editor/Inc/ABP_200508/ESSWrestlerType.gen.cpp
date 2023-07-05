// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSWrestlerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSWrestlerType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSWrestlerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSWrestlerType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSWrestlerType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSWrestlerType>()
	{
		return ESSWrestlerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSWrestlerType(ESSWrestlerType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSWrestlerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSWrestlerType_Hash() { return 1689600262U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSWrestlerType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSWrestlerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSWrestlerType::None", (int64)ESSWrestlerType::None },
				{ "ESSWrestlerType::Normal", (int64)ESSWrestlerType::Normal },
				{ "ESSWrestlerType::HighFly", (int64)ESSWrestlerType::HighFly },
				{ "ESSWrestlerType::Power", (int64)ESSWrestlerType::Power },
				{ "ESSWrestlerType::Max", (int64)ESSWrestlerType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HighFly.Name", "ESSWrestlerType::HighFly" },
				{ "Max.Name", "ESSWrestlerType::Max" },
				{ "ModuleRelativePath", "Public/ESSWrestlerType.h" },
				{ "None.Name", "ESSWrestlerType::None" },
				{ "Normal.Name", "ESSWrestlerType::Normal" },
				{ "Power.Name", "ESSWrestlerType::Power" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSWrestlerType",
				"ESSWrestlerType",
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
