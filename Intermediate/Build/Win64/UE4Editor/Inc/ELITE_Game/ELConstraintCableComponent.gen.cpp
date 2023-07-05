// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELConstraintCableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELConstraintCableComponent() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELConstraintCableComponent_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELConstraintCableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRopeConstraintParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	DEFINE_FUNCTION(UELConstraintCableComponent::execAllConstraint_Finish)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllConstraint_Finish(Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELConstraintCableComponent::execAutoConstraintFinish)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoConstraintFinish(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELConstraintCableComponent::execConstraint_Finish)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Constraint_Finish(Z_Param_Animation,Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELConstraintCableComponent::execConstraint_FinishArray)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_TARRAY_REF(FName,Z_Param_Out_SocketNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Constraint_FinishArray(Z_Param_Animation,Z_Param_Out_SocketNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELConstraintCableComponent::execConstraint_Start)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_OBJECT(AActor,Z_Param_RopeActor);
		P_GET_UBOOL(Z_Param_bDirX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Constraint_Start(Z_Param_Animation,Z_Param_SocketName,Z_Param_RopeActor,Z_Param_bDirX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELConstraintCableComponent::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded_Implementation(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELConstraintCableComponent::execUpdateConstraintLocation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_STRUCT(FVector,Z_Param_SocketLocation);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bDirX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateConstraintLocation_Implementation(Z_Param_SocketName,Z_Param_SocketLocation,Z_Param_Actor,Z_Param_bDirX);
		P_NATIVE_END;
	}
	static FName NAME_UELConstraintCableComponent_OnConstraintFinished = FName(TEXT("OnConstraintFinished"));
	void UELConstraintCableComponent::OnConstraintFinished(const AActor* Actor, const FName SocketName)
	{
		ELConstraintCableComponent_eventOnConstraintFinished_Parms Parms;
		Parms.Actor=Actor;
		Parms.SocketName=SocketName;
		ProcessEvent(FindFunctionChecked(NAME_UELConstraintCableComponent_OnConstraintFinished),&Parms);
	}
	static FName NAME_UELConstraintCableComponent_OnConstraintStarted = FName(TEXT("OnConstraintStarted"));
	void UELConstraintCableComponent::OnConstraintStarted(const FName SocketName, FRopeConstraintParam const& Param)
	{
		ELConstraintCableComponent_eventOnConstraintStarted_Parms Parms;
		Parms.SocketName=SocketName;
		Parms.Param=Param;
		ProcessEvent(FindFunctionChecked(NAME_UELConstraintCableComponent_OnConstraintStarted),&Parms);
	}
	static FName NAME_UELConstraintCableComponent_OnMontageEnded = FName(TEXT("OnMontageEnded"));
	void UELConstraintCableComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
	{
		ELConstraintCableComponent_eventOnMontageEnded_Parms Parms;
		Parms.Montage=Montage;
		Parms.bInterrupted=bInterrupted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELConstraintCableComponent_OnMontageEnded),&Parms);
	}
	static FName NAME_UELConstraintCableComponent_UpdateConstraintLocation = FName(TEXT("UpdateConstraintLocation"));
	void UELConstraintCableComponent::UpdateConstraintLocation(const FName SocketName, const FVector SocketLocation, const AActor* Actor, bool bDirX)
	{
		ELConstraintCableComponent_eventUpdateConstraintLocation_Parms Parms;
		Parms.SocketName=SocketName;
		Parms.SocketLocation=SocketLocation;
		Parms.Actor=Actor;
		Parms.bDirX=bDirX ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELConstraintCableComponent_UpdateConstraintLocation),&Parms);
	}
	void UELConstraintCableComponent::StaticRegisterNativesUELConstraintCableComponent()
	{
		UClass* Class = UELConstraintCableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllConstraint_Finish", &UELConstraintCableComponent::execAllConstraint_Finish },
			{ "AutoConstraintFinish", &UELConstraintCableComponent::execAutoConstraintFinish },
			{ "Constraint_Finish", &UELConstraintCableComponent::execConstraint_Finish },
			{ "Constraint_FinishArray", &UELConstraintCableComponent::execConstraint_FinishArray },
			{ "Constraint_Start", &UELConstraintCableComponent::execConstraint_Start },
			{ "OnMontageEnded", &UELConstraintCableComponent::execOnMontageEnded },
			{ "UpdateConstraintLocation", &UELConstraintCableComponent::execUpdateConstraintLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics
	{
		struct ELConstraintCableComponent_eventAllConstraint_Finish_Parms
		{
			UAnimSequenceBase* Animation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventAllConstraint_Finish_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "AllConstraint_Finish", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventAllConstraint_Finish_Parms), Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics
	{
		struct ELConstraintCableComponent_eventAutoConstraintFinish_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventAutoConstraintFinish_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((ELConstraintCableComponent_eventAutoConstraintFinish_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELConstraintCableComponent_eventAutoConstraintFinish_Parms), &Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "AutoConstraintFinish", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventAutoConstraintFinish_Parms), Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics
	{
		struct ELConstraintCableComponent_eventConstraint_Finish_Parms
		{
			UAnimSequenceBase* Animation;
			FName SocketName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_Finish_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_Finish_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "Constraint_Finish", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventConstraint_Finish_Parms), Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics
	{
		struct ELConstraintCableComponent_eventConstraint_FinishArray_Parms
		{
			UAnimSequenceBase* Animation;
			TArray<FName> SocketNames;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SocketNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_FinishArray_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames_Inner = { "SocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames = { "SocketNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_FinishArray_Parms, SocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::NewProp_SocketNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "Constraint_FinishArray", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventConstraint_FinishArray_Parms), Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics
	{
		struct ELConstraintCableComponent_eventConstraint_Start_Parms
		{
			UAnimSequenceBase* Animation;
			FName SocketName;
			AActor* RopeActor;
			bool bDirX;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RopeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirX_MetaData[];
#endif
		static void NewProp_bDirX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_Start_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_Start_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_RopeActor = { "RopeActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventConstraint_Start_Parms, RopeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX_SetBit(void* Obj)
	{
		((ELConstraintCableComponent_eventConstraint_Start_Parms*)Obj)->bDirX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX = { "bDirX", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELConstraintCableComponent_eventConstraint_Start_Parms), &Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_RopeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::NewProp_bDirX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "Constraint_Start", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventConstraint_Start_Parms), Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventOnConstraintFinished_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventOnConstraintFinished_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "OnConstraintFinished", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventOnConstraintFinished_Parms), Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventOnConstraintStarted_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventOnConstraintStarted_Parms, Param), Z_Construct_UScriptStruct_FRopeConstraintParam, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "OnConstraintStarted", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventOnConstraintStarted_Parms), Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((ELConstraintCableComponent_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELConstraintCableComponent_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventOnMontageEnded_Parms), Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirX_MetaData[];
#endif
		static void NewProp_bDirX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventUpdateConstraintLocation_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketLocation = { "SocketLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventUpdateConstraintLocation_Parms, SocketLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELConstraintCableComponent_eventUpdateConstraintLocation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX_SetBit(void* Obj)
	{
		((ELConstraintCableComponent_eventUpdateConstraintLocation_Parms*)Obj)->bDirX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX = { "bDirX", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELConstraintCableComponent_eventUpdateConstraintLocation_Parms), &Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_SocketLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::NewProp_bDirX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELConstraintCableComponent, nullptr, "UpdateConstraintLocation", nullptr, nullptr, sizeof(ELConstraintCableComponent_eventUpdateConstraintLocation_Parms), Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELConstraintCableComponent_NoRegister()
	{
		return UELConstraintCableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELConstraintCableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constraints_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Constraints_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Constraints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerNotifyStateClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerNotifyStateClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerNotifyStateClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckInsideOfMontageAnimNotifyState_MetaData[];
#endif
		static void NewProp_bCheckInsideOfMontageAnimNotifyState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckInsideOfMontageAnimNotifyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyNamePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyNamePrefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELConstraintCableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELConstraintCableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELConstraintCableComponent_AllConstraint_Finish, "AllConstraint_Finish" }, // 2284507036
		{ &Z_Construct_UFunction_UELConstraintCableComponent_AutoConstraintFinish, "AutoConstraintFinish" }, // 2081323575
		{ &Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Finish, "Constraint_Finish" }, // 2868441507
		{ &Z_Construct_UFunction_UELConstraintCableComponent_Constraint_FinishArray, "Constraint_FinishArray" }, // 4148573746
		{ &Z_Construct_UFunction_UELConstraintCableComponent_Constraint_Start, "Constraint_Start" }, // 1205234938
		{ &Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintFinished, "OnConstraintFinished" }, // 3100722292
		{ &Z_Construct_UFunction_UELConstraintCableComponent_OnConstraintStarted, "OnConstraintStarted" }, // 3736988265
		{ &Z_Construct_UFunction_UELConstraintCableComponent_OnMontageEnded, "OnMontageEnded" }, // 1659127465
		{ &Z_Construct_UFunction_UELConstraintCableComponent_UpdateConstraintLocation, "UpdateConstraintLocation" }, // 966035407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELConstraintCableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELConstraintCableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_ValueProp = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRopeConstraintParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_Key_KeyProp = { "Constraints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintCableComponent" },
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELConstraintCableComponent, Constraints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses_Inner = { "TriggerNotifyStateClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintCableComponent" },
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses = { "TriggerNotifyStateClasses", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELConstraintCableComponent, TriggerNotifyStateClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintCableComponent" },
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState_SetBit(void* Obj)
	{
		((UELConstraintCableComponent*)Obj)->bCheckInsideOfMontageAnimNotifyState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState = { "bCheckInsideOfMontageAnimNotifyState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELConstraintCableComponent), &Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_KeyNamePrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintCableComponent" },
		{ "ModuleRelativePath", "Public/ELConstraintCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_KeyNamePrefix = { "KeyNamePrefix", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELConstraintCableComponent, KeyNamePrefix), METADATA_PARAMS(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_KeyNamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_KeyNamePrefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELConstraintCableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_Constraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_TriggerNotifyStateClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_bCheckInsideOfMontageAnimNotifyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELConstraintCableComponent_Statics::NewProp_KeyNamePrefix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELConstraintCableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELConstraintCableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELConstraintCableComponent_Statics::ClassParams = {
		&UELConstraintCableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELConstraintCableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELConstraintCableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELConstraintCableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELConstraintCableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELConstraintCableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELConstraintCableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELConstraintCableComponent, 3716135708);
	template<> ELITE_GAME_API UClass* StaticClass<UELConstraintCableComponent>()
	{
		return UELConstraintCableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELConstraintCableComponent(Z_Construct_UClass_UELConstraintCableComponent, &UELConstraintCableComponent::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELConstraintCableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELConstraintCableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
