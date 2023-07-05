// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EShopGeneralListScrollDirectionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEShopGeneralListScrollDirectionType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EShopGeneralListScrollDirectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType, Z_Construct_UPackage__Script_ELITE(), TEXT("EShopGeneralListScrollDirectionType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EShopGeneralListScrollDirectionType>()
	{
		return EShopGeneralListScrollDirectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShopGeneralListScrollDirectionType(EShopGeneralListScrollDirectionType_StaticEnum, TEXT("/Script/ELITE"), TEXT("EShopGeneralListScrollDirectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType_Hash() { return 2395350914U; }
	UEnum* Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShopGeneralListScrollDirectionType"), 0, Get_Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShopGeneralListScrollDirectionType::None", (int64)EShopGeneralListScrollDirectionType::None },
				{ "EShopGeneralListScrollDirectionType::Left", (int64)EShopGeneralListScrollDirectionType::Left },
				{ "EShopGeneralListScrollDirectionType::Right", (int64)EShopGeneralListScrollDirectionType::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "EShopGeneralListScrollDirectionType::Left" },
				{ "ModuleRelativePath", "Public/EShopGeneralListScrollDirectionType.h" },
				{ "None.Name", "EShopGeneralListScrollDirectionType::None" },
				{ "Right.Name", "EShopGeneralListScrollDirectionType::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EShopGeneralListScrollDirectionType",
				"EShopGeneralListScrollDirectionType",
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
