// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELOperationalWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELOperationalWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELOperationalWidgetBase::execDisableUpdateInputPlayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableUpdateInputPlayerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execEnableUpdateInputPlayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableUpdateInputPlayerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execIsButtonHold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsButtonHold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execIsControllerJustKeyRepeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControllerJustKeyRepeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execSetButtonHold)
	{
		P_GET_UBOOL(Z_Param_bHold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonHold(Z_Param_bHold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execSetCursorIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCursorIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execSetDispCursorNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CursorNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDispCursorNum(Z_Param_CursorNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOperationalWidgetBase::execSetLastCursorIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LastIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastCursorIndex(Z_Param_LastIndex);
		P_NATIVE_END;
	}
	static FName NAME_UELOperationalWidgetBase_OnMoveCursor = FName(TEXT("OnMoveCursor"));
	void UELOperationalWidgetBase::OnMoveCursor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELOperationalWidgetBase_OnMoveCursor),NULL);
	}
	void UELOperationalWidgetBase::StaticRegisterNativesUELOperationalWidgetBase()
	{
		UClass* Class = UELOperationalWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableUpdateInputPlayerIndex", &UELOperationalWidgetBase::execDisableUpdateInputPlayerIndex },
			{ "EnableUpdateInputPlayerIndex", &UELOperationalWidgetBase::execEnableUpdateInputPlayerIndex },
			{ "IsButtonHold", &UELOperationalWidgetBase::execIsButtonHold },
			{ "IsControllerJustKeyRepeat", &UELOperationalWidgetBase::execIsControllerJustKeyRepeat },
			{ "SetButtonHold", &UELOperationalWidgetBase::execSetButtonHold },
			{ "SetCursorIndex", &UELOperationalWidgetBase::execSetCursorIndex },
			{ "SetDispCursorNum", &UELOperationalWidgetBase::execSetDispCursorNum },
			{ "SetLastCursorIndex", &UELOperationalWidgetBase::execSetLastCursorIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "DisableUpdateInputPlayerIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "EnableUpdateInputPlayerIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics
	{
		struct ELOperationalWidgetBase_eventIsButtonHold_Parms
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
	void Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOperationalWidgetBase_eventIsButtonHold_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOperationalWidgetBase_eventIsButtonHold_Parms), &Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "IsButtonHold", nullptr, nullptr, sizeof(ELOperationalWidgetBase_eventIsButtonHold_Parms), Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics
	{
		struct ELOperationalWidgetBase_eventIsControllerJustKeyRepeat_Parms
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
	void Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOperationalWidgetBase_eventIsControllerJustKeyRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOperationalWidgetBase_eventIsControllerJustKeyRepeat_Parms), &Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "IsControllerJustKeyRepeat", nullptr, nullptr, sizeof(ELOperationalWidgetBase_eventIsControllerJustKeyRepeat_Parms), Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "OnMoveCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics
	{
		struct ELOperationalWidgetBase_eventSetButtonHold_Parms
		{
			bool bHold;
		};
		static void NewProp_bHold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::NewProp_bHold_SetBit(void* Obj)
	{
		((ELOperationalWidgetBase_eventSetButtonHold_Parms*)Obj)->bHold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::NewProp_bHold = { "bHold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOperationalWidgetBase_eventSetButtonHold_Parms), &Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::NewProp_bHold_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::NewProp_bHold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "SetButtonHold", nullptr, nullptr, sizeof(ELOperationalWidgetBase_eventSetButtonHold_Parms), Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics
	{
		struct ELOperationalWidgetBase_eventSetCursorIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOperationalWidgetBase_eventSetCursorIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "SetCursorIndex", nullptr, nullptr, sizeof(ELOperationalWidgetBase_eventSetCursorIndex_Parms), Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics
	{
		struct ELOperationalWidgetBase_eventSetDispCursorNum_Parms
		{
			int32 CursorNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CursorNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::NewProp_CursorNum = { "CursorNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOperationalWidgetBase_eventSetDispCursorNum_Parms, CursorNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::NewProp_CursorNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "SetDispCursorNum", nullptr, nullptr, sizeof(ELOperationalWidgetBase_eventSetDispCursorNum_Parms), Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics
	{
		struct ELOperationalWidgetBase_eventSetLastCursorIndex_Parms
		{
			int32 LastIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::NewProp_LastIndex = { "LastIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOperationalWidgetBase_eventSetLastCursorIndex_Parms, LastIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::NewProp_LastIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOperationalWidgetBase, nullptr, "SetLastCursorIndex", nullptr, nullptr, sizeof(ELOperationalWidgetBase_eventSetLastCursorIndex_Parms), Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister()
	{
		return UELOperationalWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELOperationalWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CursorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreCursorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreCursorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCursorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastCursorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispCursorNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DispCursorNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabledInput_MetaData[];
#endif
		static void NewProp_IsEnabledInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabledInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELOperationalWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELOperationalWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_DisableUpdateInputPlayerIndex, "DisableUpdateInputPlayerIndex" }, // 2031822890
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_EnableUpdateInputPlayerIndex, "EnableUpdateInputPlayerIndex" }, // 3062400438
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_IsButtonHold, "IsButtonHold" }, // 163513729
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_IsControllerJustKeyRepeat, "IsControllerJustKeyRepeat" }, // 320311251
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_OnMoveCursor, "OnMoveCursor" }, // 4059647214
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_SetButtonHold, "SetButtonHold" }, // 544455037
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_SetCursorIndex, "SetCursorIndex" }, // 2152609178
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_SetDispCursorNum, "SetDispCursorNum" }, // 2407482871
		{ &Z_Construct_UFunction_UELOperationalWidgetBase_SetLastCursorIndex, "SetLastCursorIndex" }, // 790824212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELOperationalWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerController = { "InputPlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOperationalWidgetBase, InputPlayerController), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerIndex = { "InputPlayerIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOperationalWidgetBase, InputPlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_CursorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_CursorIndex = { "CursorIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOperationalWidgetBase, CursorIndex), METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_CursorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_CursorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_PreCursorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_PreCursorIndex = { "PreCursorIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOperationalWidgetBase, PreCursorIndex), METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_PreCursorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_PreCursorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_LastCursorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_LastCursorIndex = { "LastCursorIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOperationalWidgetBase, LastCursorIndex), METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_LastCursorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_LastCursorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_DispCursorNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_DispCursorNum = { "DispCursorNum", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOperationalWidgetBase, DispCursorNum), METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_DispCursorNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_DispCursorNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOperationalWidgetBase" },
		{ "ModuleRelativePath", "Public/ELOperationalWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput_SetBit(void* Obj)
	{
		((UELOperationalWidgetBase*)Obj)->IsEnabledInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput = { "IsEnabledInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELOperationalWidgetBase), &Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELOperationalWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_InputPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_CursorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_PreCursorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_LastCursorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_DispCursorNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOperationalWidgetBase_Statics::NewProp_IsEnabledInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELOperationalWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELOperationalWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELOperationalWidgetBase_Statics::ClassParams = {
		&UELOperationalWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELOperationalWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELOperationalWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELOperationalWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELOperationalWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELOperationalWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELOperationalWidgetBase, 2746615978);
	template<> ABP_200508_API UClass* StaticClass<UELOperationalWidgetBase>()
	{
		return UELOperationalWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELOperationalWidgetBase(Z_Construct_UClass_UELOperationalWidgetBase, &UELOperationalWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELOperationalWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELOperationalWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
