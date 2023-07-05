// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPauseMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPauseMenuBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPauseMenuBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPauseMenuBase();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELPauseMenuBase::execAnyKey)
	{
		P_GET_STRUCT(FKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnyKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execClearChildMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearChildMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execCursorLoopWithRepeat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Now);
		P_GET_PROPERTY(FIntProperty,Z_Param_Move);
		P_GET_PROPERTY(FIntProperty,Z_Param_ListMax);
		P_GET_UBOOL(Z_Param_Repeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NewCursor);
		P_GET_UBOOL_REF(Z_Param_Out_Moved);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPauseMenuBase::CursorLoopWithRepeat(Z_Param_Now,Z_Param_Move,Z_Param_ListMax,Z_Param_Repeat,Z_Param_Out_NewCursor,Z_Param_Out_Moved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execDecision)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Decision(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execFaceButtonLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FaceButtonLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execFaceButtonUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FaceButtonUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execFindPlayer)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Find);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindPlayer(Z_Param_Out_Find);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execGetPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerIndex(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execMoveDown)
	{
		P_GET_UBOOL(Z_Param_Repeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveDown(Z_Param_Repeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execMoveLeft)
	{
		P_GET_UBOOL(Z_Param_Repeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLeft(Z_Param_Repeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execMoveRight)
	{
		P_GET_UBOOL(Z_Param_Repeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Repeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execMoveUp)
	{
		P_GET_UBOOL(Z_Param_Repeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_Repeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execOpenChildMenu)
	{
		P_GET_OBJECT(UELPauseMenuBase,Z_Param_Child);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenChildMenu(Z_Param_Child);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execSecondTabLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondTabLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execSecondTabRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondTabRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execSpecialRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpecialRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execTabLeft)
	{
		P_GET_UBOOL(Z_Param_Repeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TabLeft(Z_Param_Repeat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPauseMenuBase::execTabRight)
	{
		P_GET_UBOOL(Z_Param_Repeat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TabRight(Z_Param_Repeat);
		P_NATIVE_END;
	}
	static FName NAME_UELPauseMenuBase_OnAnyKey = FName(TEXT("OnAnyKey"));
	void UELPauseMenuBase::OnAnyKey(FKey InKey)
	{
		ELPauseMenuBase_eventOnAnyKey_Parms Parms;
		Parms.InKey=InKey;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnAnyKey),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnCancel = FName(TEXT("OnCancel"));
	void UELPauseMenuBase::OnCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnCancel),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnDecision = FName(TEXT("OnDecision"));
	void UELPauseMenuBase::OnDecision(APlayerController* PlayerController)
	{
		ELPauseMenuBase_eventOnDecision_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnDecision),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnFaceButtonLeft = FName(TEXT("OnFaceButtonLeft"));
	void UELPauseMenuBase::OnFaceButtonLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnFaceButtonLeft),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnFaceButtonUp = FName(TEXT("OnFaceButtonUp"));
	void UELPauseMenuBase::OnFaceButtonUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnFaceButtonUp),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnMoveDown = FName(TEXT("OnMoveDown"));
	void UELPauseMenuBase::OnMoveDown(bool Repeat)
	{
		ELPauseMenuBase_eventOnMoveDown_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnMoveDown),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnMoveLeft = FName(TEXT("OnMoveLeft"));
	void UELPauseMenuBase::OnMoveLeft(bool Repeat)
	{
		ELPauseMenuBase_eventOnMoveLeft_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnMoveLeft),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnMoveRight = FName(TEXT("OnMoveRight"));
	void UELPauseMenuBase::OnMoveRight(bool Repeat)
	{
		ELPauseMenuBase_eventOnMoveRight_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnMoveRight),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnMoveUp = FName(TEXT("OnMoveUp"));
	void UELPauseMenuBase::OnMoveUp(bool Repeat)
	{
		ELPauseMenuBase_eventOnMoveUp_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnMoveUp),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnOpen = FName(TEXT("OnOpen"));
	void UELPauseMenuBase::OnOpen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnOpen),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnSecondTabLeft = FName(TEXT("OnSecondTabLeft"));
	void UELPauseMenuBase::OnSecondTabLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnSecondTabLeft),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnSecondTabRight = FName(TEXT("OnSecondTabRight"));
	void UELPauseMenuBase::OnSecondTabRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnSecondTabRight),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnSpecialRight = FName(TEXT("OnSpecialRight"));
	void UELPauseMenuBase::OnSpecialRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnSpecialRight),NULL);
	}
	static FName NAME_UELPauseMenuBase_OnTabLeft = FName(TEXT("OnTabLeft"));
	void UELPauseMenuBase::OnTabLeft(bool Repeat)
	{
		ELPauseMenuBase_eventOnTabLeft_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnTabLeft),&Parms);
	}
	static FName NAME_UELPauseMenuBase_OnTabRight = FName(TEXT("OnTabRight"));
	void UELPauseMenuBase::OnTabRight(bool Repeat)
	{
		ELPauseMenuBase_eventOnTabRight_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELPauseMenuBase_OnTabRight),&Parms);
	}
	void UELPauseMenuBase::StaticRegisterNativesUELPauseMenuBase()
	{
		UClass* Class = UELPauseMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnyKey", &UELPauseMenuBase::execAnyKey },
			{ "Cancel", &UELPauseMenuBase::execCancel },
			{ "ClearChildMenu", &UELPauseMenuBase::execClearChildMenu },
			{ "CursorLoopWithRepeat", &UELPauseMenuBase::execCursorLoopWithRepeat },
			{ "Decision", &UELPauseMenuBase::execDecision },
			{ "FaceButtonLeft", &UELPauseMenuBase::execFaceButtonLeft },
			{ "FaceButtonUp", &UELPauseMenuBase::execFaceButtonUp },
			{ "FindPlayer", &UELPauseMenuBase::execFindPlayer },
			{ "GetPlayerIndex", &UELPauseMenuBase::execGetPlayerIndex },
			{ "MoveDown", &UELPauseMenuBase::execMoveDown },
			{ "MoveLeft", &UELPauseMenuBase::execMoveLeft },
			{ "MoveRight", &UELPauseMenuBase::execMoveRight },
			{ "MoveUp", &UELPauseMenuBase::execMoveUp },
			{ "Open", &UELPauseMenuBase::execOpen },
			{ "OpenChildMenu", &UELPauseMenuBase::execOpenChildMenu },
			{ "SecondTabLeft", &UELPauseMenuBase::execSecondTabLeft },
			{ "SecondTabRight", &UELPauseMenuBase::execSecondTabRight },
			{ "SpecialRight", &UELPauseMenuBase::execSpecialRight },
			{ "TabLeft", &UELPauseMenuBase::execTabLeft },
			{ "TabRight", &UELPauseMenuBase::execTabRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics
	{
		struct ELPauseMenuBase_eventAnyKey_Parms
		{
			FKey InKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventAnyKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "AnyKey", nullptr, nullptr, sizeof(ELPauseMenuBase_eventAnyKey_Parms), Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_AnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_AnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_Cancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "ClearChildMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics
	{
		struct ELPauseMenuBase_eventCursorLoopWithRepeat_Parms
		{
			int32 Now;
			int32 Move;
			int32 ListMax;
			bool Repeat;
			int32 NewCursor;
			bool Moved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Now;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ListMax;
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCursor;
		static void NewProp_Moved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Now = { "Now", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms, Now), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms, Move), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_ListMax = { "ListMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms, ListMax), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventCursorLoopWithRepeat_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms), &Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_NewCursor = { "NewCursor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms, NewCursor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Moved_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventCursorLoopWithRepeat_Parms*)Obj)->Moved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Moved = { "Moved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms), &Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Moved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Now,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_ListMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Repeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_NewCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::NewProp_Moved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "CursorLoopWithRepeat", nullptr, nullptr, sizeof(ELPauseMenuBase_eventCursorLoopWithRepeat_Parms), Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics
	{
		struct ELPauseMenuBase_eventDecision_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventDecision_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "Decision", nullptr, nullptr, sizeof(ELPauseMenuBase_eventDecision_Parms), Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_Decision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_Decision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "FaceButtonLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "FaceButtonUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics
	{
		struct ELPauseMenuBase_eventFindPlayer_Parms
		{
			bool Find;
			bool ReturnValue;
		};
		static void NewProp_Find_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Find;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_Find_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventFindPlayer_Parms*)Obj)->Find = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_Find = { "Find", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventFindPlayer_Parms), &Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_Find_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventFindPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventFindPlayer_Parms), &Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_Find,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "FindPlayer", nullptr, nullptr, sizeof(ELPauseMenuBase_eventFindPlayer_Parms), Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_FindPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_FindPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics
	{
		struct ELPauseMenuBase_eventGetPlayerIndex_Parms
		{
			int32 ControllerId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventGetPlayerIndex_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventGetPlayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "GetPlayerIndex", nullptr, nullptr, sizeof(ELPauseMenuBase_eventGetPlayerIndex_Parms), Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics
	{
		struct ELPauseMenuBase_eventMoveDown_Parms
		{
			bool Repeat;
		};
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventMoveDown_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventMoveDown_Parms), &Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "MoveDown", nullptr, nullptr, sizeof(ELPauseMenuBase_eventMoveDown_Parms), Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_MoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_MoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics
	{
		struct ELPauseMenuBase_eventMoveLeft_Parms
		{
			bool Repeat;
		};
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventMoveLeft_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventMoveLeft_Parms), &Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "MoveLeft", nullptr, nullptr, sizeof(ELPauseMenuBase_eventMoveLeft_Parms), Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_MoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_MoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics
	{
		struct ELPauseMenuBase_eventMoveRight_Parms
		{
			bool Repeat;
		};
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventMoveRight_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventMoveRight_Parms), &Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "MoveRight", nullptr, nullptr, sizeof(ELPauseMenuBase_eventMoveRight_Parms), Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics
	{
		struct ELPauseMenuBase_eventMoveUp_Parms
		{
			bool Repeat;
		};
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventMoveUp_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventMoveUp_Parms), &Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "MoveUp", nullptr, nullptr, sizeof(ELPauseMenuBase_eventMoveUp_Parms), Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventOnAnyKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnAnyKey", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnAnyKey_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventOnDecision_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnDecision", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnDecision_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnFaceButtonLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnFaceButtonUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventOnMoveDown_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventOnMoveDown_Parms), &Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnMoveDown", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnMoveDown_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventOnMoveLeft_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventOnMoveLeft_Parms), &Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnMoveLeft", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnMoveLeft_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventOnMoveRight_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventOnMoveRight_Parms), &Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnMoveRight", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnMoveRight_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventOnMoveUp_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventOnMoveUp_Parms), &Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnMoveUp", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnMoveUp_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnSecondTabLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnSecondTabRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnSpecialRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventOnTabLeft_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventOnTabLeft_Parms), &Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnTabLeft", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnTabLeft_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventOnTabRight_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventOnTabRight_Parms), &Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OnTabRight", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOnTabRight_Parms), Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OnTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OnTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics
	{
		struct ELPauseMenuBase_eventOpenChildMenu_Parms
		{
			UELPauseMenuBase* Child;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Child;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::NewProp_Child_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuBase_eventOpenChildMenu_Parms, Child), Z_Construct_UClass_UELPauseMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::NewProp_Child_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::NewProp_Child,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "OpenChildMenu", nullptr, nullptr, sizeof(ELPauseMenuBase_eventOpenChildMenu_Parms), Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "SecondTabLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "SecondTabRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_SpecialRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_SpecialRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_SpecialRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "SpecialRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_SpecialRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_SpecialRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_SpecialRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_SpecialRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics
	{
		struct ELPauseMenuBase_eventTabLeft_Parms
		{
			bool Repeat;
		};
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventTabLeft_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventTabLeft_Parms), &Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "TabLeft", nullptr, nullptr, sizeof(ELPauseMenuBase_eventTabLeft_Parms), Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_TabLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_TabLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics
	{
		struct ELPauseMenuBase_eventTabRight_Parms
		{
			bool Repeat;
		};
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuBase_eventTabRight_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuBase_eventTabRight_Parms), &Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPauseMenuBase, nullptr, "TabRight", nullptr, nullptr, sizeof(ELPauseMenuBase_eventTabRight_Parms), Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPauseMenuBase_TabRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPauseMenuBase_TabRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPauseMenuBase_NoRegister()
	{
		return UELPauseMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UELPauseMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPadPause_MetaData[];
#endif
		static void NewProp_IsPadPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPadPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPauseMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPauseMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPauseMenuBase_AnyKey, "AnyKey" }, // 1985091127
		{ &Z_Construct_UFunction_UELPauseMenuBase_Cancel, "Cancel" }, // 835521545
		{ &Z_Construct_UFunction_UELPauseMenuBase_ClearChildMenu, "ClearChildMenu" }, // 4294548820
		{ &Z_Construct_UFunction_UELPauseMenuBase_CursorLoopWithRepeat, "CursorLoopWithRepeat" }, // 4045815772
		{ &Z_Construct_UFunction_UELPauseMenuBase_Decision, "Decision" }, // 4235497958
		{ &Z_Construct_UFunction_UELPauseMenuBase_FaceButtonLeft, "FaceButtonLeft" }, // 4129923158
		{ &Z_Construct_UFunction_UELPauseMenuBase_FaceButtonUp, "FaceButtonUp" }, // 2618653413
		{ &Z_Construct_UFunction_UELPauseMenuBase_FindPlayer, "FindPlayer" }, // 4283676778
		{ &Z_Construct_UFunction_UELPauseMenuBase_GetPlayerIndex, "GetPlayerIndex" }, // 1884172118
		{ &Z_Construct_UFunction_UELPauseMenuBase_MoveDown, "MoveDown" }, // 1718549482
		{ &Z_Construct_UFunction_UELPauseMenuBase_MoveLeft, "MoveLeft" }, // 3267468897
		{ &Z_Construct_UFunction_UELPauseMenuBase_MoveRight, "MoveRight" }, // 141689267
		{ &Z_Construct_UFunction_UELPauseMenuBase_MoveUp, "MoveUp" }, // 3366001911
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnAnyKey, "OnAnyKey" }, // 2630876965
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnCancel, "OnCancel" }, // 2378376954
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnDecision, "OnDecision" }, // 2556193056
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonLeft, "OnFaceButtonLeft" }, // 2401357277
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnFaceButtonUp, "OnFaceButtonUp" }, // 1345441664
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnMoveDown, "OnMoveDown" }, // 1072163437
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnMoveLeft, "OnMoveLeft" }, // 3601487569
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnMoveRight, "OnMoveRight" }, // 509186457
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnMoveUp, "OnMoveUp" }, // 1486166010
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnOpen, "OnOpen" }, // 3178870182
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabLeft, "OnSecondTabLeft" }, // 1857185854
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnSecondTabRight, "OnSecondTabRight" }, // 3804934689
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnSpecialRight, "OnSpecialRight" }, // 2431194816
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnTabLeft, "OnTabLeft" }, // 2563931529
		{ &Z_Construct_UFunction_UELPauseMenuBase_OnTabRight, "OnTabRight" }, // 367085551
		{ &Z_Construct_UFunction_UELPauseMenuBase_Open, "Open" }, // 559163143
		{ &Z_Construct_UFunction_UELPauseMenuBase_OpenChildMenu, "OpenChildMenu" }, // 740837890
		{ &Z_Construct_UFunction_UELPauseMenuBase_SecondTabLeft, "SecondTabLeft" }, // 1589180280
		{ &Z_Construct_UFunction_UELPauseMenuBase_SecondTabRight, "SecondTabRight" }, // 2331058147
		{ &Z_Construct_UFunction_UELPauseMenuBase_SpecialRight, "SpecialRight" }, // 3380089928
		{ &Z_Construct_UFunction_UELPauseMenuBase_TabLeft, "TabLeft" }, // 2409427836
		{ &Z_Construct_UFunction_UELPauseMenuBase_TabRight, "TabRight" }, // 2006320419
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPauseMenuBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPauseMenuBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPauseMenuBase" },
		{ "ModuleRelativePath", "Public/ELPauseMenuBase.h" },
	};
#endif
	void Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause_SetBit(void* Obj)
	{
		((UELPauseMenuBase*)Obj)->IsPadPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause = { "IsPadPause", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELPauseMenuBase), &Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPauseMenuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPauseMenuBase_Statics::NewProp_IsPadPause,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPauseMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPauseMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPauseMenuBase_Statics::ClassParams = {
		&UELPauseMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELPauseMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPauseMenuBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELPauseMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPauseMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPauseMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPauseMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPauseMenuBase, 3898798607);
	template<> ABP_200508_API UClass* StaticClass<UELPauseMenuBase>()
	{
		return UELPauseMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPauseMenuBase(Z_Construct_UClass_UELPauseMenuBase, &UELPauseMenuBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPauseMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPauseMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
