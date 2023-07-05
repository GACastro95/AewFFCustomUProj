// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EnCatLoadOutMenuType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnCatLoadOutMenuType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EnCatLoadOutMenuType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType, Z_Construct_UPackage__Script_ELITE(), TEXT("EnCatLoadOutMenuType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EnCatLoadOutMenuType>()
	{
		return EnCatLoadOutMenuType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnCatLoadOutMenuType(EnCatLoadOutMenuType_StaticEnum, TEXT("/Script/ELITE"), TEXT("EnCatLoadOutMenuType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType_Hash() { return 354684047U; }
	UEnum* Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnCatLoadOutMenuType"), 0, Get_Z_Construct_UEnum_ELITE_EnCatLoadOutMenuType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnCatLoadOutMenuType::None", (int64)EnCatLoadOutMenuType::None },
				{ "EnCatLoadOutMenuType::Profile", (int64)EnCatLoadOutMenuType::Profile },
				{ "EnCatLoadOutMenuType::Member01", (int64)EnCatLoadOutMenuType::Member01 },
				{ "EnCatLoadOutMenuType::Member02", (int64)EnCatLoadOutMenuType::Member02 },
				{ "EnCatLoadOutMenuType::MoveSet", (int64)EnCatLoadOutMenuType::MoveSet },
				{ "EnCatLoadOutMenuType::Entrance", (int64)EnCatLoadOutMenuType::Entrance },
				{ "EnCatLoadOutMenuType::Done", (int64)EnCatLoadOutMenuType::Done },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Done.Name", "EnCatLoadOutMenuType::Done" },
				{ "Entrance.Name", "EnCatLoadOutMenuType::Entrance" },
				{ "Member01.Name", "EnCatLoadOutMenuType::Member01" },
				{ "Member02.Name", "EnCatLoadOutMenuType::Member02" },
				{ "ModuleRelativePath", "Public/EnCatLoadOutMenuType.h" },
				{ "MoveSet.Name", "EnCatLoadOutMenuType::MoveSet" },
				{ "None.Name", "EnCatLoadOutMenuType::None" },
				{ "Profile.Name", "EnCatLoadOutMenuType::Profile" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EnCatLoadOutMenuType",
				"EnCatLoadOutMenuType",
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
