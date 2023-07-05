// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EWrestlerSelectWindowType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerSelectWindowType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EWrestlerSelectWindowType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EWrestlerSelectWindowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EWrestlerSelectWindowType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EWrestlerSelectWindowType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EWrestlerSelectWindowType>()
	{
		return EWrestlerSelectWindowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerSelectWindowType(EWrestlerSelectWindowType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EWrestlerSelectWindowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EWrestlerSelectWindowType_Hash() { return 3208526036U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EWrestlerSelectWindowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerSelectWindowType"), 0, Get_Z_Construct_UEnum_ABP_200508_EWrestlerSelectWindowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerSelectWindowType::EWrestlerSelectWindowType_Select", (int64)EWrestlerSelectWindowType::EWrestlerSelectWindowType_Select },
				{ "EWrestlerSelectWindowType::EWrestlerSelectWindowType_Preset", (int64)EWrestlerSelectWindowType::EWrestlerSelectWindowType_Preset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EWrestlerSelectWindowType_Preset.Name", "EWrestlerSelectWindowType::EWrestlerSelectWindowType_Preset" },
				{ "EWrestlerSelectWindowType_Select.Name", "EWrestlerSelectWindowType::EWrestlerSelectWindowType_Select" },
				{ "ModuleRelativePath", "Public/EWrestlerSelectWindowType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EWrestlerSelectWindowType",
				"EWrestlerSelectWindowType",
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
