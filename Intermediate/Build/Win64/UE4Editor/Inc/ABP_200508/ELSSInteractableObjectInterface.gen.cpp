// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInteractableObjectInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInteractableObjectInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractExecute();
// End Cross Module References
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execCanInteract)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(Z_Param_inInteractPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execCheckForSpecialCaseDoInteract)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckForSpecialCaseDoInteract_Implementation(Z_Param_inInteractPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execExecuteInteractEffect)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteInteractEffect_Implementation(Z_Param_inInteractPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetDatabaseId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDatabaseId_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetDotIconBaseLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDotIconBaseLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetDotIconLocationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDotIconLocationOffset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetIdealInteractLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetIdealInteractLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetInteractDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractDuration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetInteractExecuteType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSInteractExecute*)Z_Param__Result=P_THIS->GetInteractExecuteType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetInteractPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInteractPriority_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetInteractUIOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInteractUIOffset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execGetInteractUIValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInteractUIValue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execNeedsCheckInteractDegree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsCheckInteractDegree_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execOnBeginInteract)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginInteract_Implementation(Z_Param_inInteractPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execOnEndInteract)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_GET_UBOOL(Z_Param_inSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndInteract_Implementation(Z_Param_inInteractPlayer,Z_Param_inSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSInteractableObjectInterface::execOnTickInteract)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inInteractRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickInteract_Implementation(Z_Param_inInteractPlayer,Z_Param_inInteractRate);
		P_NATIVE_END;
	}
	bool IELSSInteractableObjectInterface::CanInteract(const AELSSPlayer* inInteractPlayer) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteract instead.");
		ELSSInteractableObjectInterface_eventCanInteract_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IELSSInteractableObjectInterface::CheckForSpecialCaseDoInteract(const AELSSPlayer* inInteractPlayer) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckForSpecialCaseDoInteract instead.");
		ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms Parms;
		return Parms.ReturnValue;
	}
	void IELSSInteractableObjectInterface::ExecuteInteractEffect(AELSSPlayer* inInteractPlayer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteInteractEffect instead.");
	}
	int32 IELSSInteractableObjectInterface::GetDatabaseId() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDatabaseId instead.");
		ELSSInteractableObjectInterface_eventGetDatabaseId_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IELSSInteractableObjectInterface::GetDotIconBaseLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDotIconBaseLocation instead.");
		ELSSInteractableObjectInterface_eventGetDotIconBaseLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IELSSInteractableObjectInterface::GetDotIconLocationOffset() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDotIconLocationOffset instead.");
		ELSSInteractableObjectInterface_eventGetDotIconLocationOffset_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IELSSInteractableObjectInterface::GetIdealInteractLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIdealInteractLocation instead.");
		ELSSInteractableObjectInterface_eventGetIdealInteractLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	float IELSSInteractableObjectInterface::GetInteractDuration() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractDuration instead.");
		ELSSInteractableObjectInterface_eventGetInteractDuration_Parms Parms;
		return Parms.ReturnValue;
	}
	ESSInteractExecute IELSSInteractableObjectInterface::GetInteractExecuteType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractExecuteType instead.");
		ELSSInteractableObjectInterface_eventGetInteractExecuteType_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IELSSInteractableObjectInterface::GetInteractPriority() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractPriority instead.");
		ELSSInteractableObjectInterface_eventGetInteractPriority_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IELSSInteractableObjectInterface::GetInteractUIOffset() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractUIOffset instead.");
		ELSSInteractableObjectInterface_eventGetInteractUIOffset_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IELSSInteractableObjectInterface::GetInteractUIValue() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractUIValue instead.");
		ELSSInteractableObjectInterface_eventGetInteractUIValue_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IELSSInteractableObjectInterface::NeedsCheckInteractDegree() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NeedsCheckInteractDegree instead.");
		ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms Parms;
		return Parms.ReturnValue;
	}
	void IELSSInteractableObjectInterface::OnBeginInteract(AELSSPlayer* inInteractPlayer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginInteract instead.");
	}
	void IELSSInteractableObjectInterface::OnEndInteract(AELSSPlayer* inInteractPlayer, bool inSuccess)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndInteract instead.");
	}
	void IELSSInteractableObjectInterface::OnTickInteract(AELSSPlayer* inInteractPlayer, float inInteractRate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTickInteract instead.");
	}
	void UELSSInteractableObjectInterface::StaticRegisterNativesUELSSInteractableObjectInterface()
	{
		UClass* Class = UELSSInteractableObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &IELSSInteractableObjectInterface::execCanInteract },
			{ "CheckForSpecialCaseDoInteract", &IELSSInteractableObjectInterface::execCheckForSpecialCaseDoInteract },
			{ "ExecuteInteractEffect", &IELSSInteractableObjectInterface::execExecuteInteractEffect },
			{ "GetDatabaseId", &IELSSInteractableObjectInterface::execGetDatabaseId },
			{ "GetDotIconBaseLocation", &IELSSInteractableObjectInterface::execGetDotIconBaseLocation },
			{ "GetDotIconLocationOffset", &IELSSInteractableObjectInterface::execGetDotIconLocationOffset },
			{ "GetIdealInteractLocation", &IELSSInteractableObjectInterface::execGetIdealInteractLocation },
			{ "GetInteractDuration", &IELSSInteractableObjectInterface::execGetInteractDuration },
			{ "GetInteractExecuteType", &IELSSInteractableObjectInterface::execGetInteractExecuteType },
			{ "GetInteractPriority", &IELSSInteractableObjectInterface::execGetInteractPriority },
			{ "GetInteractUIOffset", &IELSSInteractableObjectInterface::execGetInteractUIOffset },
			{ "GetInteractUIValue", &IELSSInteractableObjectInterface::execGetInteractUIValue },
			{ "NeedsCheckInteractDegree", &IELSSInteractableObjectInterface::execNeedsCheckInteractDegree },
			{ "OnBeginInteract", &IELSSInteractableObjectInterface::execOnBeginInteract },
			{ "OnEndInteract", &IELSSInteractableObjectInterface::execOnEndInteract },
			{ "OnTickInteract", &IELSSInteractableObjectInterface::execOnTickInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inInteractPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_inInteractPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventCanInteract_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_inInteractPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_inInteractPlayer_MetaData)) };
	void Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInteractableObjectInterface_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInteractableObjectInterface_eventCanInteract_Parms), &Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_inInteractPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "CanInteract", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventCanInteract_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inInteractPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_inInteractPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_inInteractPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_inInteractPlayer_MetaData)) };
	void Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms), &Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_inInteractPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "CheckForSpecialCaseDoInteract", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventExecuteInteractEffect_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::NewProp_inInteractPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "ExecuteInteractEffect", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventExecuteInteractEffect_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetDatabaseId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetDatabaseId", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetDatabaseId_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetDotIconBaseLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetDotIconBaseLocation", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetDotIconBaseLocation_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetDotIconLocationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetDotIconLocationOffset", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetDotIconLocationOffset_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetIdealInteractLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetIdealInteractLocation", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetIdealInteractLocation_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetInteractDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetInteractDuration", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetInteractDuration_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetInteractExecuteType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetInteractExecuteType", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetInteractExecuteType_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetInteractPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetInteractPriority", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetInteractPriority_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetInteractUIOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetInteractUIOffset", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetInteractUIOffset_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventGetInteractUIValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "GetInteractUIValue", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventGetInteractUIValue_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms), &Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "NeedsCheckInteractDegree", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventOnBeginInteract_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::NewProp_inInteractPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "OnBeginInteract", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventOnBeginInteract_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static void NewProp_inSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventOnEndInteract_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::NewProp_inSuccess_SetBit(void* Obj)
	{
		((ELSSInteractableObjectInterface_eventOnEndInteract_Parms*)Obj)->inSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::NewProp_inSuccess = { "inSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInteractableObjectInterface_eventOnEndInteract_Parms), &Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::NewProp_inSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::NewProp_inInteractPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::NewProp_inSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "OnEndInteract", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventOnEndInteract_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inInteractRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventOnTickInteract_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::NewProp_inInteractRate = { "inInteractRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInteractableObjectInterface_eventOnTickInteract_Parms, inInteractRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::NewProp_inInteractPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::NewProp_inInteractRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInteractableObjectInterface, nullptr, "OnTickInteract", nullptr, nullptr, sizeof(ELSSInteractableObjectInterface_eventOnTickInteract_Parms), Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister()
	{
		return UELSSInteractableObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInteractableObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_CanInteract, "CanInteract" }, // 3560002377
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract, "CheckForSpecialCaseDoInteract" }, // 2464727624
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_ExecuteInteractEffect, "ExecuteInteractEffect" }, // 344505924
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDatabaseId, "GetDatabaseId" }, // 565422765
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconBaseLocation, "GetDotIconBaseLocation" }, // 157611870
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetDotIconLocationOffset, "GetDotIconLocationOffset" }, // 1246234808
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetIdealInteractLocation, "GetIdealInteractLocation" }, // 1842223018
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractDuration, "GetInteractDuration" }, // 1093911052
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractExecuteType, "GetInteractExecuteType" }, // 2073111450
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractPriority, "GetInteractPriority" }, // 197028521
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIOffset, "GetInteractUIOffset" }, // 415519795
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_GetInteractUIValue, "GetInteractUIValue" }, // 2912825217
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_NeedsCheckInteractDegree, "NeedsCheckInteractDegree" }, // 2074382379
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_OnBeginInteract, "OnBeginInteract" }, // 1386976668
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_OnEndInteract, "OnEndInteract" }, // 643984408
		{ &Z_Construct_UFunction_UELSSInteractableObjectInterface_OnTickInteract, "OnTickInteract" }, // 3466224235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInteractableObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELSSInteractableObjectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::ClassParams = {
		&UELSSInteractableObjectInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInteractableObjectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInteractableObjectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInteractableObjectInterface, 4140337113);
	template<> ABP_200508_API UClass* StaticClass<UELSSInteractableObjectInterface>()
	{
		return UELSSInteractableObjectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInteractableObjectInterface(Z_Construct_UClass_UELSSInteractableObjectInterface, &UELSSInteractableObjectInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInteractableObjectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInteractableObjectInterface);
	static FName NAME_UELSSInteractableObjectInterface_CanInteract = FName(TEXT("CanInteract"));
	bool IELSSInteractableObjectInterface::Execute_CanInteract(const UObject* O, const AELSSPlayer* inInteractPlayer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventCanInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_CanInteract);
		if (Func)
		{
			Parms.inInteractPlayer=inInteractPlayer;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanInteract_Implementation(inInteractPlayer);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract = FName(TEXT("CheckForSpecialCaseDoInteract"));
	bool IELSSInteractableObjectInterface::Execute_CheckForSpecialCaseDoInteract(const UObject* O, const AELSSPlayer* inInteractPlayer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_CheckForSpecialCaseDoInteract);
		if (Func)
		{
			Parms.inInteractPlayer=inInteractPlayer;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CheckForSpecialCaseDoInteract_Implementation(inInteractPlayer);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_ExecuteInteractEffect = FName(TEXT("ExecuteInteractEffect"));
	void IELSSInteractableObjectInterface::Execute_ExecuteInteractEffect(UObject* O, AELSSPlayer* inInteractPlayer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventExecuteInteractEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_ExecuteInteractEffect);
		if (Func)
		{
			Parms.inInteractPlayer=inInteractPlayer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			I->ExecuteInteractEffect_Implementation(inInteractPlayer);
		}
	}
	static FName NAME_UELSSInteractableObjectInterface_GetDatabaseId = FName(TEXT("GetDatabaseId"));
	int32 IELSSInteractableObjectInterface::Execute_GetDatabaseId(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetDatabaseId_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetDatabaseId);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDatabaseId_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetDotIconBaseLocation = FName(TEXT("GetDotIconBaseLocation"));
	FVector IELSSInteractableObjectInterface::Execute_GetDotIconBaseLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetDotIconBaseLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetDotIconBaseLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDotIconBaseLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetDotIconLocationOffset = FName(TEXT("GetDotIconLocationOffset"));
	FVector IELSSInteractableObjectInterface::Execute_GetDotIconLocationOffset(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetDotIconLocationOffset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetDotIconLocationOffset);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDotIconLocationOffset_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetIdealInteractLocation = FName(TEXT("GetIdealInteractLocation"));
	FVector IELSSInteractableObjectInterface::Execute_GetIdealInteractLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetIdealInteractLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetIdealInteractLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetIdealInteractLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetInteractDuration = FName(TEXT("GetInteractDuration"));
	float IELSSInteractableObjectInterface::Execute_GetInteractDuration(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetInteractDuration_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetInteractDuration);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractDuration_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetInteractExecuteType = FName(TEXT("GetInteractExecuteType"));
	ESSInteractExecute IELSSInteractableObjectInterface::Execute_GetInteractExecuteType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetInteractExecuteType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetInteractExecuteType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractExecuteType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetInteractPriority = FName(TEXT("GetInteractPriority"));
	int32 IELSSInteractableObjectInterface::Execute_GetInteractPriority(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetInteractPriority_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetInteractPriority);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractPriority_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetInteractUIOffset = FName(TEXT("GetInteractUIOffset"));
	FVector IELSSInteractableObjectInterface::Execute_GetInteractUIOffset(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetInteractUIOffset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetInteractUIOffset);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractUIOffset_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_GetInteractUIValue = FName(TEXT("GetInteractUIValue"));
	int32 IELSSInteractableObjectInterface::Execute_GetInteractUIValue(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventGetInteractUIValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_GetInteractUIValue);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractUIValue_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_NeedsCheckInteractDegree = FName(TEXT("NeedsCheckInteractDegree"));
	bool IELSSInteractableObjectInterface::Execute_NeedsCheckInteractDegree(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_NeedsCheckInteractDegree);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->NeedsCheckInteractDegree_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSInteractableObjectInterface_OnBeginInteract = FName(TEXT("OnBeginInteract"));
	void IELSSInteractableObjectInterface::Execute_OnBeginInteract(UObject* O, AELSSPlayer* inInteractPlayer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventOnBeginInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_OnBeginInteract);
		if (Func)
		{
			Parms.inInteractPlayer=inInteractPlayer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			I->OnBeginInteract_Implementation(inInteractPlayer);
		}
	}
	static FName NAME_UELSSInteractableObjectInterface_OnEndInteract = FName(TEXT("OnEndInteract"));
	void IELSSInteractableObjectInterface::Execute_OnEndInteract(UObject* O, AELSSPlayer* inInteractPlayer, bool inSuccess)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventOnEndInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_OnEndInteract);
		if (Func)
		{
			Parms.inInteractPlayer=inInteractPlayer;
			Parms.inSuccess=inSuccess;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			I->OnEndInteract_Implementation(inInteractPlayer,inSuccess);
		}
	}
	static FName NAME_UELSSInteractableObjectInterface_OnTickInteract = FName(TEXT("OnTickInteract"));
	void IELSSInteractableObjectInterface::Execute_OnTickInteract(UObject* O, AELSSPlayer* inInteractPlayer, float inInteractRate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSInteractableObjectInterface::StaticClass()));
		ELSSInteractableObjectInterface_eventOnTickInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSInteractableObjectInterface_OnTickInteract);
		if (Func)
		{
			Parms.inInteractPlayer=inInteractPlayer;
			Parms.inInteractRate=inInteractRate;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IELSSInteractableObjectInterface*)(O->GetNativeInterfaceAddress(UELSSInteractableObjectInterface::StaticClass())))
		{
			I->OnTickInteract_Implementation(inInteractPlayer,inInteractRate);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
