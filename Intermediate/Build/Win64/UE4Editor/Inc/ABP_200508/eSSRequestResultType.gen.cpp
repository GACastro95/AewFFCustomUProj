// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSRequestResultType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSRequestResultType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSRequestResultType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSRequestResultType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSRequestResultType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSRequestResultType>()
	{
		return eSSRequestResultType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSRequestResultType(eSSRequestResultType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSRequestResultType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSRequestResultType_Hash() { return 3123717108U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSRequestResultType"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSRequestResultType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSRequestResultType::eSSRequestResultType_Success", (int64)eSSRequestResultType::eSSRequestResultType_Success },
				{ "eSSRequestResultType::eSSRequestResultType_Failed", (int64)eSSRequestResultType::eSSRequestResultType_Failed },
				{ "eSSRequestResultType::eSSRequestResultType_ErrDialog", (int64)eSSRequestResultType::eSSRequestResultType_ErrDialog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSRequestResultType_ErrDialog.Name", "eSSRequestResultType::eSSRequestResultType_ErrDialog" },
				{ "eSSRequestResultType_Failed.Name", "eSSRequestResultType::eSSRequestResultType_Failed" },
				{ "eSSRequestResultType_Success.Name", "eSSRequestResultType::eSSRequestResultType_Success" },
				{ "ModuleRelativePath", "Public/eSSRequestResultType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSRequestResultType",
				"eSSRequestResultType",
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
