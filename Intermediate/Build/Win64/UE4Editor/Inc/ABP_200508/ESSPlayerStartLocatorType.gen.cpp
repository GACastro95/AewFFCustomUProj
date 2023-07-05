// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSPlayerStartLocatorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSPlayerStartLocatorType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSPlayerStartLocatorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSPlayerStartLocatorType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerStartLocatorType>()
	{
		return ESSPlayerStartLocatorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSPlayerStartLocatorType(ESSPlayerStartLocatorType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSPlayerStartLocatorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType_Hash() { return 2304092300U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSPlayerStartLocatorType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSPlayerStartLocatorType::P1", (int64)ESSPlayerStartLocatorType::P1 },
				{ "ESSPlayerStartLocatorType::P2", (int64)ESSPlayerStartLocatorType::P2 },
				{ "ESSPlayerStartLocatorType::P3", (int64)ESSPlayerStartLocatorType::P3 },
				{ "ESSPlayerStartLocatorType::P4", (int64)ESSPlayerStartLocatorType::P4 },
				{ "ESSPlayerStartLocatorType::P5", (int64)ESSPlayerStartLocatorType::P5 },
				{ "ESSPlayerStartLocatorType::Num", (int64)ESSPlayerStartLocatorType::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSPlayerStartLocatorType.h" },
				{ "Num.Name", "ESSPlayerStartLocatorType::Num" },
				{ "P1.Name", "ESSPlayerStartLocatorType::P1" },
				{ "P2.Name", "ESSPlayerStartLocatorType::P2" },
				{ "P3.Name", "ESSPlayerStartLocatorType::P3" },
				{ "P4.Name", "ESSPlayerStartLocatorType::P4" },
				{ "P5.Name", "ESSPlayerStartLocatorType::P5" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSPlayerStartLocatorType",
				"ESSPlayerStartLocatorType",
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
