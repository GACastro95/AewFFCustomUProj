// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELDisplayBeltType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELDisplayBeltType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDisplayBeltType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELDisplayBeltType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELDisplayBeltType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELDisplayBeltType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELDisplayBeltType>()
	{
		return EELDisplayBeltType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELDisplayBeltType(EELDisplayBeltType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELDisplayBeltType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELDisplayBeltType_Hash() { return 1492642398U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELDisplayBeltType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELDisplayBeltType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELDisplayBeltType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELDisplayBeltType::CHAMPION", (int64)EELDisplayBeltType::CHAMPION },
				{ "EELDisplayBeltType::CHAMPIONS", (int64)EELDisplayBeltType::CHAMPIONS },
				{ "EELDisplayBeltType::CHAMPIONSHIP", (int64)EELDisplayBeltType::CHAMPIONSHIP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CHAMPION.Name", "EELDisplayBeltType::CHAMPION" },
				{ "CHAMPIONS.Name", "EELDisplayBeltType::CHAMPIONS" },
				{ "CHAMPIONSHIP.Name", "EELDisplayBeltType::CHAMPIONSHIP" },
				{ "ModuleRelativePath", "Public/EELDisplayBeltType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELDisplayBeltType",
				"EELDisplayBeltType",
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
