// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ETitleMenu_QuickSettingsCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETitleMenu_QuickSettingsCommand() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ETitleMenu_QuickSettingsCommand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ETitleMenu_QuickSettingsCommand"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ETitleMenu_QuickSettingsCommand>()
	{
		return ETitleMenu_QuickSettingsCommand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETitleMenu_QuickSettingsCommand(ETitleMenu_QuickSettingsCommand_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ETitleMenu_QuickSettingsCommand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand_Hash() { return 223556110U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETitleMenu_QuickSettingsCommand"), 0, Get_Z_Construct_UEnum_ABP_200508_ETitleMenu_QuickSettingsCommand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETitleMenu_QuickSettingsCommand::None", (int64)ETitleMenu_QuickSettingsCommand::None },
				{ "ETitleMenu_QuickSettingsCommand::Button", (int64)ETitleMenu_QuickSettingsCommand::Button },
				{ "ETitleMenu_QuickSettingsCommand::Integer", (int64)ETitleMenu_QuickSettingsCommand::Integer },
				{ "ETitleMenu_QuickSettingsCommand::Real", (int64)ETitleMenu_QuickSettingsCommand::Real },
				{ "ETitleMenu_QuickSettingsCommand::Boolean", (int64)ETitleMenu_QuickSettingsCommand::Boolean },
				{ "ETitleMenu_QuickSettingsCommand::ETitleMenu_MAX", (int64)ETitleMenu_QuickSettingsCommand::ETitleMenu_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "ETitleMenu_QuickSettingsCommand::Boolean" },
				{ "Button.Name", "ETitleMenu_QuickSettingsCommand::Button" },
				{ "ETitleMenu_MAX.Hidden", "" },
				{ "ETitleMenu_MAX.Name", "ETitleMenu_QuickSettingsCommand::ETitleMenu_MAX" },
				{ "Integer.Name", "ETitleMenu_QuickSettingsCommand::Integer" },
				{ "ModuleRelativePath", "Public/ETitleMenu_QuickSettingsCommand.h" },
				{ "None.Name", "ETitleMenu_QuickSettingsCommand::None" },
				{ "Real.Name", "ETitleMenu_QuickSettingsCommand::Real" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ETitleMenu_QuickSettingsCommand",
				"ETitleMenu_QuickSettingsCommand",
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
