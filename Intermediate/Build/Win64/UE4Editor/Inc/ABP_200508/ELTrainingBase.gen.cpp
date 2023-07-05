// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTrainingBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTrainingBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTrainingBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTrainingBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ETrainingReversalKind();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELTrainingBase::execOnChangedLastHitMovesSituationIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MovesSituationIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangedLastHitMovesSituationIndex(Z_Param_MovesSituationIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTrainingBase::execOnChangedReversalKind)
	{
		P_GET_ENUM(ETrainingReversalKind,Z_Param_Kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangedReversalKind(ETrainingReversalKind(Z_Param_Kind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTrainingBase::execSetTargetCharacter)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	static FName NAME_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP = FName(TEXT("OnChangedLastHitMovesSituationIndex_BP"));
	void UELTrainingBase::OnChangedLastHitMovesSituationIndex_BP(int32 MovesSituationIndex)
	{
		ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_BP_Parms Parms;
		Parms.MovesSituationIndex=MovesSituationIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP),&Parms);
	}
	static FName NAME_UELTrainingBase_OnChangedReversalKind_BP = FName(TEXT("OnChangedReversalKind_BP"));
	void UELTrainingBase::OnChangedReversalKind_BP(ETrainingReversalKind Kind)
	{
		ELTrainingBase_eventOnChangedReversalKind_BP_Parms Parms;
		Parms.Kind=Kind;
		ProcessEvent(FindFunctionChecked(NAME_UELTrainingBase_OnChangedReversalKind_BP),&Parms);
	}
	static FName NAME_UELTrainingBase_Tick_UpdateTargetCharacter = FName(TEXT("Tick_UpdateTargetCharacter"));
	bool UELTrainingBase::Tick_UpdateTargetCharacter()
	{
		ELTrainingBase_eventTick_UpdateTargetCharacter_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELTrainingBase_Tick_UpdateTargetCharacter),&Parms);
		return !!Parms.ReturnValue;
	}
	void UELTrainingBase::StaticRegisterNativesUELTrainingBase()
	{
		UClass* Class = UELTrainingBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChangedLastHitMovesSituationIndex", &UELTrainingBase::execOnChangedLastHitMovesSituationIndex },
			{ "OnChangedReversalKind", &UELTrainingBase::execOnChangedReversalKind },
			{ "SetTargetCharacter", &UELTrainingBase::execSetTargetCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics
	{
		struct ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_Parms
		{
			int32 MovesSituationIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesSituationIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::NewProp_MovesSituationIndex = { "MovesSituationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_Parms, MovesSituationIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::NewProp_MovesSituationIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTrainingBase, nullptr, "OnChangedLastHitMovesSituationIndex", nullptr, nullptr, sizeof(ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_Parms), Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesSituationIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::NewProp_MovesSituationIndex = { "MovesSituationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_BP_Parms, MovesSituationIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::NewProp_MovesSituationIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTrainingBase, nullptr, "OnChangedLastHitMovesSituationIndex_BP", nullptr, nullptr, sizeof(ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_BP_Parms), Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics
	{
		struct ELTrainingBase_eventOnChangedReversalKind_Parms
		{
			ETrainingReversalKind Kind;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTrainingBase_eventOnChangedReversalKind_Parms, Kind), Z_Construct_UEnum_ABP_200508_ETrainingReversalKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::NewProp_Kind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTrainingBase, nullptr, "OnChangedReversalKind", nullptr, nullptr, sizeof(ELTrainingBase_eventOnChangedReversalKind_Parms), Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTrainingBase_eventOnChangedReversalKind_BP_Parms, Kind), Z_Construct_UEnum_ABP_200508_ETrainingReversalKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::NewProp_Kind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTrainingBase, nullptr, "OnChangedReversalKind_BP", nullptr, nullptr, sizeof(ELTrainingBase_eventOnChangedReversalKind_BP_Parms), Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics
	{
		struct ELTrainingBase_eventSetTargetCharacter_Parms
		{
			AELCharacter_Native* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTrainingBase_eventSetTargetCharacter_Parms, Character), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTrainingBase, nullptr, "SetTargetCharacter", nullptr, nullptr, sizeof(ELTrainingBase_eventSetTargetCharacter_Parms), Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTrainingBase_eventTick_UpdateTargetCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTrainingBase_eventTick_UpdateTargetCharacter_Parms), &Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTrainingBase, nullptr, "Tick_UpdateTargetCharacter", nullptr, nullptr, sizeof(ELTrainingBase_eventTick_UpdateTargetCharacter_Parms), Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTrainingBase_NoRegister()
	{
		return UELTrainingBase::StaticClass();
	}
	struct Z_Construct_UClass_UELTrainingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTrainingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTrainingBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex, "OnChangedLastHitMovesSituationIndex" }, // 3126091974
		{ &Z_Construct_UFunction_UELTrainingBase_OnChangedLastHitMovesSituationIndex_BP, "OnChangedLastHitMovesSituationIndex_BP" }, // 4159694601
		{ &Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind, "OnChangedReversalKind" }, // 2368162157
		{ &Z_Construct_UFunction_UELTrainingBase_OnChangedReversalKind_BP, "OnChangedReversalKind_BP" }, // 3675643640
		{ &Z_Construct_UFunction_UELTrainingBase_SetTargetCharacter, "SetTargetCharacter" }, // 1948709315
		{ &Z_Construct_UFunction_UELTrainingBase_Tick_UpdateTargetCharacter, "Tick_UpdateTargetCharacter" }, // 3258946419
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTrainingBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTrainingBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTrainingBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTrainingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTrainingBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTrainingBase_Statics::ClassParams = {
		&UELTrainingBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELTrainingBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTrainingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTrainingBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTrainingBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTrainingBase, 699756529);
	template<> ABP_200508_API UClass* StaticClass<UELTrainingBase>()
	{
		return UELTrainingBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTrainingBase(Z_Construct_UClass_UELTrainingBase, &UELTrainingBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTrainingBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTrainingBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
