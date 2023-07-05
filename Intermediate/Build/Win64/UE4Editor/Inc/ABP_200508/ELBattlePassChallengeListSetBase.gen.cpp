// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBattlePassChallengeListSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBattlePassChallengeListSetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassChallengeListSetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassChallengeListSetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELBattlePassChallengeListSetBase::execClearMovedCursorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMovedCursorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassChallengeListSetBase::execMoveCursor)
	{
		P_GET_UBOOL(Z_Param_IsUp);
		P_GET_UBOOL_REF(Z_Param_Out_Moved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MoveCursor(Z_Param_IsUp,Z_Param_Out_Moved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassChallengeListSetBase::execMovePage)
	{
		P_GET_UBOOL(Z_Param_IsUp);
		P_GET_UBOOL_REF(Z_Param_Out_Moved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MovePage(Z_Param_IsUp,Z_Param_Out_Moved);
		P_NATIVE_END;
	}
	static FName NAME_UELBattlePassChallengeListSetBase_GetDispItemNum = FName(TEXT("GetDispItemNum"));
	int32 UELBattlePassChallengeListSetBase::GetDispItemNum() const
	{
		ELBattlePassChallengeListSetBase_eventGetDispItemNum_Parms Parms;
		const_cast<UELBattlePassChallengeListSetBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELBattlePassChallengeListSetBase_GetDispItemNum),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELBattlePassChallengeListSetBase_GetItemListNum = FName(TEXT("GetItemListNum"));
	int32 UELBattlePassChallengeListSetBase::GetItemListNum() const
	{
		ELBattlePassChallengeListSetBase_eventGetItemListNum_Parms Parms;
		const_cast<UELBattlePassChallengeListSetBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELBattlePassChallengeListSetBase_GetItemListNum),&Parms);
		return Parms.ReturnValue;
	}
	void UELBattlePassChallengeListSetBase::StaticRegisterNativesUELBattlePassChallengeListSetBase()
	{
		UClass* Class = UELBattlePassChallengeListSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMovedCursorType", &UELBattlePassChallengeListSetBase::execClearMovedCursorType },
			{ "MoveCursor", &UELBattlePassChallengeListSetBase::execMoveCursor },
			{ "MovePage", &UELBattlePassChallengeListSetBase::execMovePage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassChallengeListSetBase, nullptr, "ClearMovedCursorType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassChallengeListSetBase_eventGetDispItemNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassChallengeListSetBase, nullptr, "GetDispItemNum", nullptr, nullptr, sizeof(ELBattlePassChallengeListSetBase_eventGetDispItemNum_Parms), Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassChallengeListSetBase_eventGetItemListNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassChallengeListSetBase, nullptr, "GetItemListNum", nullptr, nullptr, sizeof(ELBattlePassChallengeListSetBase_eventGetItemListNum_Parms), Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics
	{
		struct ELBattlePassChallengeListSetBase_eventMoveCursor_Parms
		{
			bool IsUp;
			bool Moved;
			int32 ReturnValue;
		};
		static void NewProp_IsUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUp;
		static void NewProp_Moved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_IsUp_SetBit(void* Obj)
	{
		((ELBattlePassChallengeListSetBase_eventMoveCursor_Parms*)Obj)->IsUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_IsUp = { "IsUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassChallengeListSetBase_eventMoveCursor_Parms), &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_IsUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_Moved_SetBit(void* Obj)
	{
		((ELBattlePassChallengeListSetBase_eventMoveCursor_Parms*)Obj)->Moved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassChallengeListSetBase_eventMoveCursor_Parms), &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_Moved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassChallengeListSetBase_eventMoveCursor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_IsUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_Moved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassChallengeListSetBase, nullptr, "MoveCursor", nullptr, nullptr, sizeof(ELBattlePassChallengeListSetBase_eventMoveCursor_Parms), Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics
	{
		struct ELBattlePassChallengeListSetBase_eventMovePage_Parms
		{
			bool IsUp;
			bool Moved;
			int32 ReturnValue;
		};
		static void NewProp_IsUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUp;
		static void NewProp_Moved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moved;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_IsUp_SetBit(void* Obj)
	{
		((ELBattlePassChallengeListSetBase_eventMovePage_Parms*)Obj)->IsUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_IsUp = { "IsUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassChallengeListSetBase_eventMovePage_Parms), &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_IsUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_Moved_SetBit(void* Obj)
	{
		((ELBattlePassChallengeListSetBase_eventMovePage_Parms*)Obj)->Moved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassChallengeListSetBase_eventMovePage_Parms), &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_Moved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassChallengeListSetBase_eventMovePage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_IsUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_Moved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassChallengeListSetBase, nullptr, "MovePage", nullptr, nullptr, sizeof(ELBattlePassChallengeListSetBase_eventMovePage_Parms), Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBattlePassChallengeListSetBase_NoRegister()
	{
		return UELBattlePassChallengeListSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCursor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_ClearMovedCursorType, "ClearMovedCursorType" }, // 2361790433
		{ &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetDispItemNum, "GetDispItemNum" }, // 1034665999
		{ &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_GetItemListNum, "GetItemListNum" }, // 1436581029
		{ &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MoveCursor, "MoveCursor" }, // 3934635203
		{ &Z_Construct_UFunction_UELBattlePassChallengeListSetBase_MovePage, "MovePage" }, // 645048959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBattlePassChallengeListSetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::NewProp_CurrentCursor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBattlePassChallengeListSetBase" },
		{ "ModuleRelativePath", "Public/ELBattlePassChallengeListSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::NewProp_CurrentCursor = { "CurrentCursor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBattlePassChallengeListSetBase, CurrentCursor), METADATA_PARAMS(Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::NewProp_CurrentCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::NewProp_CurrentCursor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::NewProp_CurrentCursor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBattlePassChallengeListSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::ClassParams = {
		&UELBattlePassChallengeListSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBattlePassChallengeListSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBattlePassChallengeListSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBattlePassChallengeListSetBase, 3458849302);
	template<> ABP_200508_API UClass* StaticClass<UELBattlePassChallengeListSetBase>()
	{
		return UELBattlePassChallengeListSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBattlePassChallengeListSetBase(Z_Construct_UClass_UELBattlePassChallengeListSetBase, &UELBattlePassChallengeListSetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELBattlePassChallengeListSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBattlePassChallengeListSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
