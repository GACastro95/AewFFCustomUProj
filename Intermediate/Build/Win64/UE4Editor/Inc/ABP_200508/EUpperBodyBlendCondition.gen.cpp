// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EUpperBodyBlendCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUpperBodyBlendCondition() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EUpperBodyBlendCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EUpperBodyBlendCondition"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EUpperBodyBlendCondition>()
	{
		return EUpperBodyBlendCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpperBodyBlendCondition(EUpperBodyBlendCondition_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EUpperBodyBlendCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition_Hash() { return 1653006836U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpperBodyBlendCondition"), 0, Get_Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpperBodyBlendCondition::CoreHP_Over", (int64)EUpperBodyBlendCondition::CoreHP_Over },
				{ "EUpperBodyBlendCondition::CoreHP_Under", (int64)EUpperBodyBlendCondition::CoreHP_Under },
				{ "EUpperBodyBlendCondition::HeadHP_Over", (int64)EUpperBodyBlendCondition::HeadHP_Over },
				{ "EUpperBodyBlendCondition::HeadHP_Under", (int64)EUpperBodyBlendCondition::HeadHP_Under },
				{ "EUpperBodyBlendCondition::BodyHP_Over", (int64)EUpperBodyBlendCondition::BodyHP_Over },
				{ "EUpperBodyBlendCondition::BodyHP_Under", (int64)EUpperBodyBlendCondition::BodyHP_Under },
				{ "EUpperBodyBlendCondition::LegHP_Over", (int64)EUpperBodyBlendCondition::LegHP_Over },
				{ "EUpperBodyBlendCondition::LegHP_Under", (int64)EUpperBodyBlendCondition::LegHP_Under },
				{ "EUpperBodyBlendCondition::ArmHP_Over", (int64)EUpperBodyBlendCondition::ArmHP_Over },
				{ "EUpperBodyBlendCondition::ArmHP_Under", (int64)EUpperBodyBlendCondition::ArmHP_Under },
				{ "EUpperBodyBlendCondition::Momentum_Over", (int64)EUpperBodyBlendCondition::Momentum_Over },
				{ "EUpperBodyBlendCondition::Momentum_Under", (int64)EUpperBodyBlendCondition::Momentum_Under },
				{ "EUpperBodyBlendCondition::Momentum_Special", (int64)EUpperBodyBlendCondition::Momentum_Special },
				{ "EUpperBodyBlendCondition::Arg_Over", (int64)EUpperBodyBlendCondition::Arg_Over },
				{ "EUpperBodyBlendCondition::Arg_Under", (int64)EUpperBodyBlendCondition::Arg_Under },
				{ "EUpperBodyBlendCondition::SpringBoard", (int64)EUpperBodyBlendCondition::SpringBoard },
				{ "EUpperBodyBlendCondition::Fence", (int64)EUpperBodyBlendCondition::Fence },
				{ "EUpperBodyBlendCondition::Topecon", (int64)EUpperBodyBlendCondition::Topecon },
				{ "EUpperBodyBlendCondition::DirectionReverse", (int64)EUpperBodyBlendCondition::DirectionReverse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arg_Over.Name", "EUpperBodyBlendCondition::Arg_Over" },
				{ "Arg_Under.Name", "EUpperBodyBlendCondition::Arg_Under" },
				{ "ArmHP_Over.Name", "EUpperBodyBlendCondition::ArmHP_Over" },
				{ "ArmHP_Under.Name", "EUpperBodyBlendCondition::ArmHP_Under" },
				{ "BlueprintType", "true" },
				{ "BodyHP_Over.Name", "EUpperBodyBlendCondition::BodyHP_Over" },
				{ "BodyHP_Under.Name", "EUpperBodyBlendCondition::BodyHP_Under" },
				{ "CoreHP_Over.Name", "EUpperBodyBlendCondition::CoreHP_Over" },
				{ "CoreHP_Under.Name", "EUpperBodyBlendCondition::CoreHP_Under" },
				{ "DirectionReverse.Name", "EUpperBodyBlendCondition::DirectionReverse" },
				{ "Fence.Name", "EUpperBodyBlendCondition::Fence" },
				{ "HeadHP_Over.Name", "EUpperBodyBlendCondition::HeadHP_Over" },
				{ "HeadHP_Under.Name", "EUpperBodyBlendCondition::HeadHP_Under" },
				{ "LegHP_Over.Name", "EUpperBodyBlendCondition::LegHP_Over" },
				{ "LegHP_Under.Name", "EUpperBodyBlendCondition::LegHP_Under" },
				{ "ModuleRelativePath", "Public/EUpperBodyBlendCondition.h" },
				{ "Momentum_Over.Name", "EUpperBodyBlendCondition::Momentum_Over" },
				{ "Momentum_Special.Name", "EUpperBodyBlendCondition::Momentum_Special" },
				{ "Momentum_Under.Name", "EUpperBodyBlendCondition::Momentum_Under" },
				{ "SpringBoard.Name", "EUpperBodyBlendCondition::SpringBoard" },
				{ "Topecon.Name", "EUpperBodyBlendCondition::Topecon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EUpperBodyBlendCondition",
				"EUpperBodyBlendCondition",
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
