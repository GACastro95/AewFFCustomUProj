// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSMoveCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSMoveCommand() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSMoveCommand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSMoveCommand, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSMoveCommand"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSMoveCommand>()
	{
		return ESSMoveCommand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSMoveCommand(ESSMoveCommand_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSMoveCommand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSMoveCommand_Hash() { return 3264008891U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSMoveCommand"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSMoveCommand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSMoveCommand::None", (int64)ESSMoveCommand::None },
				{ "ESSMoveCommand::Punch1", (int64)ESSMoveCommand::Punch1 },
				{ "ESSMoveCommand::Punch2", (int64)ESSMoveCommand::Punch2 },
				{ "ESSMoveCommand::Kick1", (int64)ESSMoveCommand::Kick1 },
				{ "ESSMoveCommand::Kick2", (int64)ESSMoveCommand::Kick2 },
				{ "ESSMoveCommand::Throw1", (int64)ESSMoveCommand::Throw1 },
				{ "ESSMoveCommand::Throw2", (int64)ESSMoveCommand::Throw2 },
				{ "ESSMoveCommand::DashPunch1", (int64)ESSMoveCommand::DashPunch1 },
				{ "ESSMoveCommand::DashPunch2", (int64)ESSMoveCommand::DashPunch2 },
				{ "ESSMoveCommand::DashKick1", (int64)ESSMoveCommand::DashKick1 },
				{ "ESSMoveCommand::DashKick2", (int64)ESSMoveCommand::DashKick2 },
				{ "ESSMoveCommand::DashThrow1", (int64)ESSMoveCommand::DashThrow1 },
				{ "ESSMoveCommand::DashThrow2", (int64)ESSMoveCommand::DashThrow2 },
				{ "ESSMoveCommand::AirPunch1", (int64)ESSMoveCommand::AirPunch1 },
				{ "ESSMoveCommand::AirPunch2", (int64)ESSMoveCommand::AirPunch2 },
				{ "ESSMoveCommand::AirKick1", (int64)ESSMoveCommand::AirKick1 },
				{ "ESSMoveCommand::AirKick2", (int64)ESSMoveCommand::AirKick2 },
				{ "ESSMoveCommand::AirThrow1", (int64)ESSMoveCommand::AirThrow1 },
				{ "ESSMoveCommand::AirThrow2", (int64)ESSMoveCommand::AirThrow2 },
				{ "ESSMoveCommand::Finisher", (int64)ESSMoveCommand::Finisher },
				{ "ESSMoveCommand::SituationMove", (int64)ESSMoveCommand::SituationMove },
				{ "ESSMoveCommand::AbilityMove1", (int64)ESSMoveCommand::AbilityMove1 },
				{ "ESSMoveCommand::AbilityMove2", (int64)ESSMoveCommand::AbilityMove2 },
				{ "ESSMoveCommand::AbilityMove3", (int64)ESSMoveCommand::AbilityMove3 },
				{ "ESSMoveCommand::Max", (int64)ESSMoveCommand::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbilityMove1.Name", "ESSMoveCommand::AbilityMove1" },
				{ "AbilityMove2.Name", "ESSMoveCommand::AbilityMove2" },
				{ "AbilityMove3.Name", "ESSMoveCommand::AbilityMove3" },
				{ "AirKick1.Name", "ESSMoveCommand::AirKick1" },
				{ "AirKick2.Name", "ESSMoveCommand::AirKick2" },
				{ "AirPunch1.Name", "ESSMoveCommand::AirPunch1" },
				{ "AirPunch2.Name", "ESSMoveCommand::AirPunch2" },
				{ "AirThrow1.Name", "ESSMoveCommand::AirThrow1" },
				{ "AirThrow2.Name", "ESSMoveCommand::AirThrow2" },
				{ "BlueprintType", "true" },
				{ "DashKick1.Name", "ESSMoveCommand::DashKick1" },
				{ "DashKick2.Name", "ESSMoveCommand::DashKick2" },
				{ "DashPunch1.Name", "ESSMoveCommand::DashPunch1" },
				{ "DashPunch2.Name", "ESSMoveCommand::DashPunch2" },
				{ "DashThrow1.Name", "ESSMoveCommand::DashThrow1" },
				{ "DashThrow2.Name", "ESSMoveCommand::DashThrow2" },
				{ "Finisher.Name", "ESSMoveCommand::Finisher" },
				{ "Kick1.Name", "ESSMoveCommand::Kick1" },
				{ "Kick2.Name", "ESSMoveCommand::Kick2" },
				{ "Max.Name", "ESSMoveCommand::Max" },
				{ "ModuleRelativePath", "Public/ESSMoveCommand.h" },
				{ "None.Name", "ESSMoveCommand::None" },
				{ "Punch1.Name", "ESSMoveCommand::Punch1" },
				{ "Punch2.Name", "ESSMoveCommand::Punch2" },
				{ "SituationMove.Name", "ESSMoveCommand::SituationMove" },
				{ "Throw1.Name", "ESSMoveCommand::Throw1" },
				{ "Throw2.Name", "ESSMoveCommand::Throw2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSMoveCommand",
				"ESSMoveCommand",
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
