// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSRequestVerbType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSRequestVerbType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRequestVerbType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSRequestVerbType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSRequestVerbType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSRequestVerbType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSRequestVerbType>()
	{
		return ESSRequestVerbType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSRequestVerbType(ESSRequestVerbType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSRequestVerbType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSRequestVerbType_Hash() { return 1468636074U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSRequestVerbType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSRequestVerbType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSRequestVerbType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSRequestVerbType::ESSRequestVerbType_GET", (int64)ESSRequestVerbType::ESSRequestVerbType_GET },
				{ "ESSRequestVerbType::ESSRequestVerbType_POST", (int64)ESSRequestVerbType::ESSRequestVerbType_POST },
				{ "ESSRequestVerbType::ESSRequestVerbType_PUT", (int64)ESSRequestVerbType::ESSRequestVerbType_PUT },
				{ "ESSRequestVerbType::ESSRequestVerbType_NUM", (int64)ESSRequestVerbType::ESSRequestVerbType_NUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ESSRequestVerbType_GET.Name", "ESSRequestVerbType::ESSRequestVerbType_GET" },
				{ "ESSRequestVerbType_NUM.Name", "ESSRequestVerbType::ESSRequestVerbType_NUM" },
				{ "ESSRequestVerbType_POST.Name", "ESSRequestVerbType::ESSRequestVerbType_POST" },
				{ "ESSRequestVerbType_PUT.Name", "ESSRequestVerbType::ESSRequestVerbType_PUT" },
				{ "ModuleRelativePath", "Public/ESSRequestVerbType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSRequestVerbType",
				"ESSRequestVerbType",
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
