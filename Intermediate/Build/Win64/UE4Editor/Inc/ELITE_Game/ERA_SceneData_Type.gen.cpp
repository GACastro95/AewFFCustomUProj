// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_SceneData_Type.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_SceneData_Type() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_SceneData_Type_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_SceneData_Type"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_SceneData_Type>()
	{
		return ERA_SceneData_Type_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_SceneData_Type(ERA_SceneData_Type_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_SceneData_Type"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type_Hash() { return 3388435832U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_SceneData_Type"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_SceneData_Type_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_SceneData_Type::Loading", (int64)ERA_SceneData_Type::Loading },
				{ "ERA_SceneData_Type::Entrance", (int64)ERA_SceneData_Type::Entrance },
				{ "ERA_SceneData_Type::Victory", (int64)ERA_SceneData_Type::Victory },
				{ "ERA_SceneData_Type::EntranceBattle", (int64)ERA_SceneData_Type::EntranceBattle },
				{ "ERA_SceneData_Type::CreateName", (int64)ERA_SceneData_Type::CreateName },
				{ "ERA_SceneData_Type::CreateTeam", (int64)ERA_SceneData_Type::CreateTeam },
				{ "ERA_SceneData_Type::ERA_SceneData_MAX", (int64)ERA_SceneData_Type::ERA_SceneData_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CreateName.Name", "ERA_SceneData_Type::CreateName" },
				{ "CreateTeam.Name", "ERA_SceneData_Type::CreateTeam" },
				{ "Entrance.Name", "ERA_SceneData_Type::Entrance" },
				{ "EntranceBattle.Name", "ERA_SceneData_Type::EntranceBattle" },
				{ "ERA_SceneData_MAX.Hidden", "" },
				{ "ERA_SceneData_MAX.Name", "ERA_SceneData_Type::ERA_SceneData_MAX" },
				{ "Loading.Name", "ERA_SceneData_Type::Loading" },
				{ "ModuleRelativePath", "Public/ERA_SceneData_Type.h" },
				{ "Victory.Name", "ERA_SceneData_Type::Victory" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_SceneData_Type",
				"ERA_SceneData_Type",
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
