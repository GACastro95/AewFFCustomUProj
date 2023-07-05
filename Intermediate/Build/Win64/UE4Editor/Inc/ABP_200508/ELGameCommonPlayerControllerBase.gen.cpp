// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameCommonPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameCommonPlayerControllerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalPlayer_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FyMenuInputParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnInputKey();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execGetControllerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetControllerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execGetELLocalPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELLocalPlayer**)Z_Param__Result=P_THIS->GetELLocalPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execGetInputParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FyMenuInputParam*)Z_Param__Result=P_THIS->GetInputParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execIsKeyRepeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKeyRepeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execIsLastInputMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLastInputMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execSetControllerEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerEnabled(Z_Param_ControllerId,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execSetEnableSimultaneousInputByLRStick)
	{
		P_GET_UBOOL(Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSimultaneousInputByLRStick(Z_Param__state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameCommonPlayerControllerBase::execSetInputParam)
	{
		P_GET_STRUCT(FyMenuInputParam,Z_Param_InParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputParam(Z_Param_InParam);
		P_NATIVE_END;
	}
	void AELGameCommonPlayerControllerBase::StaticRegisterNativesAELGameCommonPlayerControllerBase()
	{
		UClass* Class = AELGameCommonPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerId", &AELGameCommonPlayerControllerBase::execGetControllerId },
			{ "GetELLocalPlayer", &AELGameCommonPlayerControllerBase::execGetELLocalPlayer },
			{ "GetInputParam", &AELGameCommonPlayerControllerBase::execGetInputParam },
			{ "IsKeyRepeat", &AELGameCommonPlayerControllerBase::execIsKeyRepeat },
			{ "IsLastInputMouse", &AELGameCommonPlayerControllerBase::execIsLastInputMouse },
			{ "SetControllerEnabled", &AELGameCommonPlayerControllerBase::execSetControllerEnabled },
			{ "SetEnableSimultaneousInputByLRStick", &AELGameCommonPlayerControllerBase::execSetEnableSimultaneousInputByLRStick },
			{ "SetInputParam", &AELGameCommonPlayerControllerBase::execSetInputParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventGetControllerId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameCommonPlayerControllerBase_eventGetControllerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "GetControllerId", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventGetControllerId_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventGetELLocalPlayer_Parms
		{
			UELLocalPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameCommonPlayerControllerBase_eventGetELLocalPlayer_Parms, ReturnValue), Z_Construct_UClass_UELLocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "GetELLocalPlayer", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventGetELLocalPlayer_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventGetInputParam_Parms
		{
			FyMenuInputParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameCommonPlayerControllerBase_eventGetInputParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FyMenuInputParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "GetInputParam", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventGetInputParam_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventIsKeyRepeat_Parms
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
	void Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameCommonPlayerControllerBase_eventIsKeyRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameCommonPlayerControllerBase_eventIsKeyRepeat_Parms), &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "IsKeyRepeat", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventIsKeyRepeat_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventIsLastInputMouse_Parms
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
	void Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameCommonPlayerControllerBase_eventIsLastInputMouse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameCommonPlayerControllerBase_eventIsLastInputMouse_Parms), &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "IsLastInputMouse", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventIsLastInputMouse_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventSetControllerEnabled_Parms
		{
			int32 ControllerId;
			int32 Enabled;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameCommonPlayerControllerBase_eventSetControllerEnabled_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameCommonPlayerControllerBase_eventSetControllerEnabled_Parms, Enabled), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "SetControllerEnabled", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventSetControllerEnabled_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventSetEnableSimultaneousInputByLRStick_Parms
		{
			bool _state;
		};
		static void NewProp__state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::NewProp__state_SetBit(void* Obj)
	{
		((ELGameCommonPlayerControllerBase_eventSetEnableSimultaneousInputByLRStick_Parms*)Obj)->_state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameCommonPlayerControllerBase_eventSetEnableSimultaneousInputByLRStick_Parms), &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::NewProp__state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "SetEnableSimultaneousInputByLRStick", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventSetEnableSimultaneousInputByLRStick_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics
	{
		struct ELGameCommonPlayerControllerBase_eventSetInputParam_Parms
		{
			FyMenuInputParam InParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameCommonPlayerControllerBase_eventSetInputParam_Parms, InParam), Z_Construct_UScriptStruct_FyMenuInputParam, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::NewProp_InParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameCommonPlayerControllerBase, nullptr, "SetInputParam", nullptr, nullptr, sizeof(ELGameCommonPlayerControllerBase_eventSetInputParam_Parms), Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister()
	{
		return AELGameCommonPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InputKeyStateNow_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyStateNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputKeyStateNow;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InputKeyStatePre_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyStatePre_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputKeyStatePre;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecInputKeyNow_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecInputKeyNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExecInputKeyNow;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecInputKeyPre_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecInputKeyPre_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExecInputKeyPre;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RepeatCheckKey_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatCheckKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RepeatCheckKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LStickX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LStickX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LStickY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LStickY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RStickX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RStickX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RStickY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RStickY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MousePosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MousePosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MousePosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MousePosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCheckRepeat_MetaData[];
#endif
		static void NewProp_IsCheckRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCheckRepeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRepeatSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRepeatSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckingKeyboardMouseInputState_MetaData[];
#endif
		static void NewProp_CheckingKeyboardMouseInputState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CheckingKeyboardMouseInputState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyboardStateNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKeyboardStateNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInputLimit_MetaData[];
#endif
		static void NewProp_IsInputLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInputLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetControllerId, "GetControllerId" }, // 3113116592
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetELLocalPlayer, "GetELLocalPlayer" }, // 2927185266
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_GetInputParam, "GetInputParam" }, // 4007510033
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsKeyRepeat, "IsKeyRepeat" }, // 1091248732
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_IsLastInputMouse, "IsLastInputMouse" }, // 3508565600
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetControllerEnabled, "SetControllerEnabled" }, // 385861676
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetEnableSimultaneousInputByLRStick, "SetEnableSimultaneousInputByLRStick" }, // 252725231
		{ &Z_Construct_UFunction_AELGameCommonPlayerControllerBase_SetInputParam, "SetInputParam" }, // 3511288411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELGameCommonPlayerControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow = { "InputKeyStateNow", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, InputKeyStateNow), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre = { "InputKeyStatePre", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, InputKeyStatePre), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow = { "ExecInputKeyNow", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, ExecInputKeyNow), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre = { "ExecInputKeyPre", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, ExecInputKeyPre), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey = { "RepeatCheckKey", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RepeatCheckKey), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickX = { "LStickX", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, LStickX), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickY = { "LStickY", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, LStickY), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickX = { "RStickX", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RStickX), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickY = { "RStickY", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RStickY), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LTrigger = { "LTrigger", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, LTrigger), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RTrigger = { "RTrigger", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RTrigger), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosX = { "MousePosX", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, MousePosX), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosY = { "MousePosY", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, MousePosY), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat_SetBit(void* Obj)
	{
		((AELGameCommonPlayerControllerBase*)Obj)->IsCheckRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat = { "IsCheckRepeat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameCommonPlayerControllerBase), &Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CurrentRepeatSpan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CurrentRepeatSpan = { "CurrentRepeatSpan", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, CurrentRepeatSpan), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CurrentRepeatSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CurrentRepeatSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatElapsedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatElapsedTime = { "RepeatElapsedTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RepeatElapsedTime), METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState_SetBit(void* Obj)
	{
		((AELGameCommonPlayerControllerBase*)Obj)->CheckingKeyboardMouseInputState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState = { "CheckingKeyboardMouseInputState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameCommonPlayerControllerBase), &Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyboardStateNow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyboardStateNow = { "InputKeyboardStateNow", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELGameCommonPlayerControllerBase, InputKeyboardStateNow), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyboardStateNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyboardStateNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameCommonPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELGameCommonPlayerControllerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit_SetBit(void* Obj)
	{
		((AELGameCommonPlayerControllerBase*)Obj)->IsInputLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit = { "IsInputLimit", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELGameCommonPlayerControllerBase), &Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStateNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyStatePre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_ExecInputKeyPre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatCheckKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LStickY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RStickY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_LTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_MousePosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsCheckRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CurrentRepeatSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_RepeatElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_CheckingKeyboardMouseInputState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_InputKeyboardStateNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::NewProp_IsInputLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELGameCommonPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::ClassParams = {
		&AELGameCommonPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELGameCommonPlayerControllerBase, 4222574240);
	template<> ABP_200508_API UClass* StaticClass<AELGameCommonPlayerControllerBase>()
	{
		return AELGameCommonPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELGameCommonPlayerControllerBase(Z_Construct_UClass_AELGameCommonPlayerControllerBase, &AELGameCommonPlayerControllerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELGameCommonPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELGameCommonPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
