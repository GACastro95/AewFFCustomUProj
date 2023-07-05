// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELFootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELFootIK() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELFootIK_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELFootIK();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FFootCtrlState();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELFootIK::execAddFootOverlappedActor)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_UBOOL(Z_Param_bForceAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFootOverlappedActor(Z_Param_bLeft,Z_Param_OverlappedActor,Z_Param_bForceAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELFootIK::execGetHipsOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHipsOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELFootIK::execIsCheckFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCheckFloor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELFootIK::execRemoveFootOverlappedActor)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFootOverlappedActor(Z_Param_bLeft,Z_Param_OverlappedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELFootIK::execResetHipsOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHipsOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELFootIK::execSetUseStandTraceOffset)
	{
		P_GET_UBOOL(Z_Param_UseStandOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseStandTraceOffset(Z_Param_UseStandOffset);
		P_NATIVE_END;
	}
	void UELFootIK::StaticRegisterNativesUELFootIK()
	{
		UClass* Class = UELFootIK::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFootOverlappedActor", &UELFootIK::execAddFootOverlappedActor },
			{ "GetHipsOffset", &UELFootIK::execGetHipsOffset },
			{ "IsCheckFloor", &UELFootIK::execIsCheckFloor },
			{ "RemoveFootOverlappedActor", &UELFootIK::execRemoveFootOverlappedActor },
			{ "ResetHipsOffset", &UELFootIK::execResetHipsOffset },
			{ "SetUseStandTraceOffset", &UELFootIK::execSetUseStandTraceOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics
	{
		struct ELFootIK_eventAddFootOverlappedActor_Parms
		{
			bool bLeft;
			AActor* OverlappedActor;
			bool bForceAdd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[];
#endif
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceAdd_MetaData[];
#endif
		static void NewProp_bForceAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((ELFootIK_eventAddFootOverlappedActor_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELFootIK_eventAddFootOverlappedActor_Parms), &Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFootIK_eventAddFootOverlappedActor_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd_SetBit(void* Obj)
	{
		((ELFootIK_eventAddFootOverlappedActor_Parms*)Obj)->bForceAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd = { "bForceAdd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELFootIK_eventAddFootOverlappedActor_Parms), &Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::NewProp_bForceAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootIK, nullptr, "AddFootOverlappedActor", nullptr, nullptr, sizeof(ELFootIK_eventAddFootOverlappedActor_Parms), Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics
	{
		struct ELFootIK_eventGetHipsOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFootIK_eventGetHipsOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootIK, nullptr, "GetHipsOffset", nullptr, nullptr, sizeof(ELFootIK_eventGetHipsOffset_Parms), Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootIK_GetHipsOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootIK_GetHipsOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics
	{
		struct ELFootIK_eventIsCheckFloor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELFootIK_eventIsCheckFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELFootIK_eventIsCheckFloor_Parms), &Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootIK, nullptr, "IsCheckFloor", nullptr, nullptr, sizeof(ELFootIK_eventIsCheckFloor_Parms), Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootIK_IsCheckFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootIK_IsCheckFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics
	{
		struct ELFootIK_eventRemoveFootOverlappedActor_Parms
		{
			bool bLeft;
			AActor* OverlappedActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[];
#endif
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((ELFootIK_eventRemoveFootOverlappedActor_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELFootIK_eventRemoveFootOverlappedActor_Parms), &Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFootIK_eventRemoveFootOverlappedActor_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_bLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootIK, nullptr, "RemoveFootOverlappedActor", nullptr, nullptr, sizeof(ELFootIK_eventRemoveFootOverlappedActor_Parms), Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELFootIK_ResetHipsOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_ResetHipsOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootIK_ResetHipsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootIK, nullptr, "ResetHipsOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_ResetHipsOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_ResetHipsOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootIK_ResetHipsOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootIK_ResetHipsOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics
	{
		struct ELFootIK_eventSetUseStandTraceOffset_Parms
		{
			bool UseStandOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseStandOffset_MetaData[];
#endif
		static void NewProp_UseStandOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseStandOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset_SetBit(void* Obj)
	{
		((ELFootIK_eventSetUseStandTraceOffset_Parms*)Obj)->UseStandOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset = { "UseStandOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELFootIK_eventSetUseStandTraceOffset_Parms), &Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::NewProp_UseStandOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootIK, nullptr, "SetUseStandTraceOffset", nullptr, nullptr, sizeof(ELFootIK_eventSetUseStandTraceOffset_Parms), Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELFootIK_NoRegister()
	{
		return UELFootIK::StaticClass();
	}
	struct Z_Construct_UClass_UELFootIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComplexTrace_MetaData[];
#endif
		static void NewProp_bComplexTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComplexTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsBoneName_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HipsBoneName_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootBoneName_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootBoneName_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegBoneName_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LegBoneName_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegBoneName_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LegBoneName_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompatibleSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTracebyFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugTracebyFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchMode_MetaData[];
#endif
		static void NewProp_bMatchMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceOffsetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceOffsetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorkHipOffset_MetaData[];
#endif
		static void NewProp_bWorkHipOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorkHipOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideHipOffset_MetaData[];
#endif
		static void NewProp_bOverrideHipOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideHipOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandTraceOffsetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandTraceOffsetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTraceOffsetTheStand_MetaData[];
#endif
		static void NewProp_bUseTraceOffsetTheStand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTraceOffsetTheStand;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParamIgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamIgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamIgnoreActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckFloor_MetaData[];
#endif
		static void NewProp_bIsCheckFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetHipsOffset_MetaData[];
#endif
		static void NewProp_bResetHipsOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetHipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemporaryOverrideHipOffset_MetaData[];
#endif
		static void NewProp_bTemporaryOverrideHipOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemporaryOverrideHipOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELFootIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELFootIK_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELFootIK_AddFootOverlappedActor, "AddFootOverlappedActor" }, // 2166308592
		{ &Z_Construct_UFunction_UELFootIK_GetHipsOffset, "GetHipsOffset" }, // 2912742752
		{ &Z_Construct_UFunction_UELFootIK_IsCheckFloor, "IsCheckFloor" }, // 2014202837
		{ &Z_Construct_UFunction_UELFootIK_RemoveFootOverlappedActor, "RemoveFootOverlappedActor" }, // 812414487
		{ &Z_Construct_UFunction_UELFootIK_ResetHipsOffset, "ResetHipsOffset" }, // 3046405541
		{ &Z_Construct_UFunction_UELFootIK_SetUseStandTraceOffset, "SetUseStandTraceOffset" }, // 1585827745
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELFootIK.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bComplexTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace = { "bComplexTrace", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsBoneName_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsBoneName_L = { "HipsBoneName_L", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, HipsBoneName_L), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsBoneName_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsBoneName_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_L = { "FootBoneName_L", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, FootBoneName_L), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_R = { "FootBoneName_R", nullptr, (EPropertyFlags)0x0020080200000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, FootBoneName_R), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_L = { "LegBoneName_L", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, LegBoneName_L), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_R = { "LegBoneName_R", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, LegBoneName_R), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_CompatibleSkeleton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_CompatibleSkeleton = { "CompatibleSkeleton", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, CompatibleSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_CompatibleSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_CompatibleSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTrace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTrace = { "DebugTrace", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, DebugTrace), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTracebyFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTracebyFloor = { "DebugTracebyFloor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, DebugTracebyFloor), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTracebyFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTracebyFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bMatchMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode = { "bMatchMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_LeftFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_LeftFoot = { "LeftFoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, LeftFoot), Z_Construct_UScriptStruct_FFootCtrlState, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_LeftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_LeftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_RightFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_RightFoot = { "RightFoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, RightFoot), Z_Construct_UScriptStruct_FFootCtrlState, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_RightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_RightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_FootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_FootOffset = { "FootOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, FootOffset), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_FootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_FootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceOffsetLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceOffsetLength = { "TraceOffsetLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, TraceOffsetLength), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceOffsetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceOffsetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_DiffHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_DiffHeight = { "DiffHeight", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, DiffHeight), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_DiffHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_DiffHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsOffset = { "HipsOffset", nullptr, (EPropertyFlags)0x00200c0000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, HipsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bWorkHipOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset = { "bWorkHipOffset", nullptr, (EPropertyFlags)0x00200c0000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bOverrideHipOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset = { "bOverrideHipOffset", nullptr, (EPropertyFlags)0x00200c0000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_OwnerScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_OwnerScale = { "OwnerScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, OwnerScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_OwnerScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_OwnerScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_StandTraceOffsetLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_StandTraceOffsetLength = { "StandTraceOffsetLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, StandTraceOffsetLength), METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_StandTraceOffsetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_StandTraceOffsetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bUseTraceOffsetTheStand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand = { "bUseTraceOffsetTheStand", nullptr, (EPropertyFlags)0x00200c0000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors_Inner = { "ParamIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors = { "ParamIgnoreActors", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, ParamIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_SkelMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_SkelMesh = { "SkelMesh", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELFootIK, SkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_SkelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_SkelMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bIsCheckFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor = { "bIsCheckFloor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bResetHipsOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset = { "bResetHipsOffset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFootIK" },
		{ "ModuleRelativePath", "Public/ELFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset_SetBit(void* Obj)
	{
		((UELFootIK*)Obj)->bTemporaryOverrideHipOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset = { "bTemporaryOverrideHipOffset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELFootIK), &Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bComplexTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsBoneName_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_FootBoneName_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_LegBoneName_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_CompatibleSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_DebugTracebyFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bMatchMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_LeftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_RightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_FootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_TraceOffsetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_DiffHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_HipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bWorkHipOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bOverrideHipOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_OwnerScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_StandTraceOffsetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bUseTraceOffsetTheStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_ParamIgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_SkelMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bIsCheckFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bResetHipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELFootIK_Statics::NewProp_bTemporaryOverrideHipOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELFootIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELFootIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELFootIK_Statics::ClassParams = {
		&UELFootIK::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELFootIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELFootIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELFootIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELFootIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELFootIK, 2644000469);
	template<> ABP_200508_API UClass* StaticClass<UELFootIK>()
	{
		return UELFootIK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELFootIK(Z_Construct_UClass_UELFootIK, &UELFootIK::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELFootIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELFootIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
