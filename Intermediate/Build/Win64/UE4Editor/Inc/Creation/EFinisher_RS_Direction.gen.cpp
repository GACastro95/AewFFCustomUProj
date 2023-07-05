// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EFinisher_RS_Direction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFinisher_RS_Direction() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_RS_Direction();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EFinisher_RS_Direction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EFinisher_RS_Direction, Z_Construct_UPackage__Script_Creation(), TEXT("EFinisher_RS_Direction"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EFinisher_RS_Direction>()
	{
		return EFinisher_RS_Direction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFinisher_RS_Direction(EFinisher_RS_Direction_StaticEnum, TEXT("/Script/Creation"), TEXT("EFinisher_RS_Direction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EFinisher_RS_Direction_Hash() { return 1119633474U; }
	UEnum* Z_Construct_UEnum_Creation_EFinisher_RS_Direction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFinisher_RS_Direction"), 0, Get_Z_Construct_UEnum_Creation_EFinisher_RS_Direction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFinisher_RS_Direction::All", (int64)EFinisher_RS_Direction::All },
				{ "EFinisher_RS_Direction::Up", (int64)EFinisher_RS_Direction::Up },
				{ "EFinisher_RS_Direction::Down", (int64)EFinisher_RS_Direction::Down },
				{ "EFinisher_RS_Direction::EFinisher_RS_MAX", (int64)EFinisher_RS_Direction::EFinisher_RS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EFinisher_RS_Direction::All" },
				{ "BlueprintType", "true" },
				{ "Down.Name", "EFinisher_RS_Direction::Down" },
				{ "EFinisher_RS_MAX.Hidden", "" },
				{ "EFinisher_RS_MAX.Name", "EFinisher_RS_Direction::EFinisher_RS_MAX" },
				{ "ModuleRelativePath", "Public/EFinisher_RS_Direction.h" },
				{ "Up.Name", "EFinisher_RS_Direction::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EFinisher_RS_Direction",
				"EFinisher_RS_Direction",
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
